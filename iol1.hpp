#ifndef __IO_L1_HPP__
#define __IO_L1_HPP__ 1

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

#elif defined(unix) || defined(__unix) || defined(__unix__) || (defined(__APPLE__) && defined(__MACH__))
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
            else             raw.c_lflag &= ~ECHO;
            raw.c_cc[VMIN]  = 1;
            raw.c_cc[VTIME] = 0;
            tcsetattr(STDIN_FILENO, TCSANOW, &raw);
        }

        inline void apply_cooked() {
            tcsetattr(STDIN_FILENO, TCSANOW, &original_term());
        }

        inline int read_one(bool show) {
            if (!active_flag()) apply_raw();
            unsigned char c = 0;
            ssize_t n = read(STDIN_FILENO, &c, 1);
            if (show && n == 1) {
                std::fputc(c, stdout);
                std::fflush(stdout);
            }
            return (n == 1) ? static_cast<int>(c) : 0;
        }
    }

    inline void start() {
        detail::active_flag() = true;
        detail::apply_raw();
    }

    inline void end() {
        detail::active_flag() = false;
        detail::apply_cooked();
    }

    inline void echo(bool on = true) {
        detail::echo_flag() = on;
        if (!detail::active_flag()) detail::apply_raw();
    }

    inline int getch() {
        return detail::read_one(detail::echo_flag());
    }

    inline int getchne() {
        return detail::read_one(false);
    }

    inline int getche() {
        return detail::read_one(true);
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
