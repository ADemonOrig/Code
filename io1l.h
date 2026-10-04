#ifndef IOL1_H
#define IOL1_H 1

#if defined(_WIN32) || defined(_WIN64)
#include <conio.h>

static int iol1_detail_echo_flag = 0;

static void iol1_start(void) {}
static void iol1_end(void) {}

static void iol1_echo(int on) {
    iol1_detail_echo_flag = on ? 1 : 0;
}

static int iol1_getch(void) {
    if (iol1_detail_echo_flag) return _getche();
    return _getch();
}

static int iol1_getchne(void) { return _getch();  }
static int iol1_getche(void)  { return _getche(); }
static int iol1_kbhit(void)   { return _kbhit();  }

#elif defined(unix)  defined(__unix)  defined(__unix__) || (defined(__APPLE__) && defined(__MACH__))
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/select.h>

static int iol1_detail_echo_flag   = 0;
static int iol1_detail_active_flag = 0;
static int iol1_detail_saved       = 0;
static struct termios iol1_detail_orig;

static void iol1_detail_save_orig(void) {
    if (!iol1_detail_saved) {
        tcgetattr(STDIN_FILENO, &iol1_detail_orig);
        iol1_detail_saved = 1;
    }
}

static void iol1_detail_apply_raw(void) {
    struct termios raw;
    iol1_detail_save_orig();
    raw = iol1_detail_orig;
    raw.c_lflag &= ~ICANON;
    raw.c_lflag &= ~ECHO;
    raw.c_cc[VMIN]  = 1;
    raw.c_cc[VTIME] = 0;
    tcsetattr(STDIN_FILENO, TCSANOW, &raw);
}

static void iol1_detail_apply_cooked(void) {
    iol1_detail_save_orig();
    tcsetattr(STDIN_FILENO, TCSANOW, &iol1_detail_orig);
}

static int iol1_detail_read_one(int show) {
    unsigned char c = 0;
    ssize_t n;

    if (!iol1_detail_active_flag) iol1_detail_apply_raw();

    n = read(STDIN_FILENO, &c, 1);

    if (show && n == 1) {
        fputc(c, stdout);
        fflush(stdout);
    }

    return (n == 1) ? (int)c : 0;
}

static void iol1_start(void) {
    iol1_detail_active_flag = 1;
    iol1_detail_apply_raw();
}

static void iol1_end(void) {
    iol1_detail_active_flag = 0;
    iol1_detail_apply_cooked();
}

static void iol1_echo(int on) {
    iol1_detail_echo_flag = on ? 1 : 0;
}

static int iol1_getch(void)   { return iol1_detail_read_one(iol1_detail_echo_flag); }
static int iol1_getchne(void) { return iol1_detail_read_one(0); }
static int iol1_getche(void)  { return iol1_detail_read_one(1); }

static int iol1_kbhit(void) {
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
    #error "iol1.h: platform not supported"
#endif

#endif
