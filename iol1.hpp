#ifndef IO_L1_HPP
#define IO_L1_HPP 1

namespace iol1 {

#if defined(_WIN32) || defined(_WIN64)
    #include <conio.h>

    namespace detail {
        inline bool& echo_flag() {
            static bool f = false;
            return f;
        }
    }

    inline void start() {}
    inline void end() {}

    inline void echo(bool on = true) {
        detail::echo_flag() = on;
    }

    inline int getch() {
        if (detail::echo_flag()) return _getche();
        return _getch();
    }

    inline int getchne() {
        return _getch();
    }

    inline int getche() {
        return _getche();
    }

    inline int kbhit() {
        return _kbhit();
    }

#elif defined(unix) || defined(unix) || (defined(APPLE) && defined(MACH__))
    #include <termios.h>
    #include <unistd.h>
    #include <fcntl.h>
    #include <cstdio>
    #include <sys/select.h>

    namespace detail {
        inline bool& echo_flag() {
            static bool f = false;
            return f;
        }

        inline bool& active_flag() {
            static bool f = false;
            return f;
        }

        inline termios& original_term() {
            static termios t;
            static bool saved = false;
            if (!saved) {
                tcgetattr(STDIN_FILENO, &t);
                saved = true;
            }
            return t;
        }

        inline void apply_raw() {
            termios raw = original_term();
            raw.c_lflag &= ~ICANON;
            if (echo_flag()) raw.c_lflag |= ECHO;
            else raw.c_lflag &= ~ECHO;
            raw.c_cc[VMIN]  = 1;
            raw.c_cc[VTIME] = 0;
            tcsetattr(STDIN_FILENO, TCSANOW, &raw);
        }

        inline void apply_cooked() {
            tcsetattr(STDIN_FILENO, TCSANOW, &original_term());
        }
    }

    inline void start(bool on = false) {
        detail::active_flag() = on;
        detail::apply_raw();
    }

    inline void end() {
        detail::active_flag() = false;
        detail::apply_cooked();
    }

    inline void echo(bool on = true) {
        detail::echo_flag() = on;
        if (detail::active_flag()) detail::apply_raw();
    }

    inline int getch() {
        if (!detail::active_flag()) detail::apply_raw();
        unsigned char c = 0;
        ssize_t n = read(STDIN_FILENO, &c, 1);
        if (detail::echo_flag() && n == 1) std::fputc(c, stdout);
        return (n == 1) ? static_cast<int>(c) : 0;
    }

    inline int getchne() {
        bool cpy = detail::echo_flag();
        detail::echo_flag() = false;
        if (!detail::active_flag()) detail::apply_raw();
        unsigned char c = 0;
        ssize_t n = read(STDIN_FILENO, &c, 1);
        if (detail::echo_flag() && n == 1) std::fputc(c, stdout);
        detail::echo_flag() = cpy;
        return (n == 1) ? static_cast<int>(c) : 0;
    }

    inline int getche() {
        bool cpy = detail::echo_flag();
        detail::echo_flag() = true;
        if (!detail::active_flag()) detail::apply_raw();
        unsigned char c = 0;
        ssize_t n = read(STDIN_FILENO, &c, 1);
        if (detail::echo_flag() && n == 1) std::fputc(c, stdout);
        detail::echo_flag() = cpy;
        return (n == 1) ? static_cast<int>(c) : 0;
    }

    inline int kbhit() {
        fd_set fds;
        FD_ZERO(&fds);
        FD_SET(STDIN_FILENO, &fds);
        timeval tv{0, 0};
        int result = select(STDIN_FILENO + 1, &fds, nullptr, nullptr, &tv);
        return (result > 0 && FD_ISSET(STDIN_FILENO, &fds)) ? 1 : 0;
    }

#else
    #error "iol1.hpp: platform not supported"
#endif

}

#endif
