#ifndef __IO_H__
#define __IO_H__ 1

#if defined(_WIN32) || defined(_WIN64)
#include <conio.h>

static int io_detail_echo_flag = 0;

static void io_start(void) {}
static void io_end(void) {}

static void io_echo(int on) {
    io_detail_echo_flag = on ? 1 : 0;
}

static int io_getch(void) {
    if (io_detail_echo_flag) return _getche();
    return _getch();
}

static int io_getchne(void) { return _getch();  }
static int io_getche(void)  { return _getche(); }
static int io_kbhit(void)   { return _kbhit();  }

#elif defined(unix) || defined(__unix) || defined(__unix__) || (defined(__APPLE__) && defined(__MACH__))
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/select.h>

static int io_detail_echo_flag   = 0;
static int io_detail_active_flag = 0;
static int io_detail_saved       = 0;
static struct termios io_detail_orig;

static void io_detail_save_orig(void) {
    if (!io_detail_saved) {
        tcgetattr(STDIN_FILENO, &io_detail_orig);
        io_detail_saved = 1;
    }
}

static void io_detail_apply_raw(void) {
    struct termios raw;
    io_detail_save_orig();
    raw = io_detail_orig;
    raw.c_lflag &= ~ICANON;
    raw.c_lflag &= ~ECHO;
    raw.c_cc[VMIN]  = 1;
    raw.c_cc[VTIME] = 0;
    tcsetattr(STDIN_FILENO, TCSANOW, &raw);
}

static void io_detail_apply_cooked(void) {
    io_detail_save_orig();
    tcsetattr(STDIN_FILENO, TCSANOW, &io_detail_orig);
}

static int io_detail_read_one(int show) {
    unsigned char c = 0;
    ssize_t n;
    if (!io_detail_active_flag) io_detail_apply_raw();
    n = read(STDIN_FILENO, &c, 1);
    if (show && n == 1) {
        fputc(c, stdout);
        fflush(stdout);
    }
    return (n == 1) ? (int)c : 0;
}

static void io_start(void) {
    io_detail_active_flag = 1;
    io_detail_apply_raw();
}

static void io_end(void) {
    io_detail_active_flag = 0;
    io_detail_apply_cooked();
}

static void io_echo(int on) {
    io_detail_echo_flag = on ? 1 : 0;
}

static int io_getch(void)   { return io_detail_read_one(io_detail_echo_flag); }
static int io_getchne(void) { return io_detail_read_one(0); }
static int io_getche(void)  { return io_detail_read_one(1); }

static int io_kbhit(void) {
    fd_set fds;
    struct timeval tv;
    int result;
    FD_ZERO(&fds);
    FD_SET(STDIN_FILENO, &fds);
    tv.tv_sec  = 0;
    tv.tv_usec = 0;
    result = select(STDIN_FILENO + 1, &fds, NULL, NULL, &tv);
    return (result > 0 && FD_ISSET(STDIN_FILENO, &fds)) ? 1 : 0;
}

#else
    #error "io.h: platform not supported"
#endif

#endif
