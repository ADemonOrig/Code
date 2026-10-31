#ifndef __snake__
#define __snake__ 1

#include <iostream>
#include <cstdlib>
#include <cstring>

namespace snake
{
    namespace error
    {
        static const unsigned char dead = 1;
        static const unsigned char grow = 2;

        static const unsigned char is_dead = 1;
        static const unsigned char no_grow = 2;
    }

    using namespace error;

    using error_t = unsigned char;


    class snake
    {
    public:

        struct scale
        {
        public:
            int x = 0;
            int y = 0;

            scale() noexcept {}

            scale(int _x, int _y = 0) noexcept {
                x = _x;
                y = _y;
            }

            scale(const snake::scale& _scale) noexcept {
                x = _scale.x;
                y = _scale.y;
            }

            template<unsigned long long int N>
            scale(const int (&arr)[N]) noexcept {
                x = (N >= 1) ? arr[0] : 0;
                y = (N >= 2) ? arr[1] : 0;
            }

            snake::scale clone() const noexcept {
                return snake::scale{x, y};
            }
        };

    private:
        snake::scale *_data = 0;
        unsigned long long int _size = 0;
        unsigned long long int _cap = 0;
        snake::scale _dir = 0;
        unsigned long long int _food = 0;

        void _grow() {
            if (_size >= _cap) {
                unsigned long long int __cap = _cap ? (_cap << 1) : 1;
                while (_size >= __cap) {
                    if ((__cap << 1) <= __cap) throw error::grow;
                    __cap <<= 1;
                }
                if (_data) _data = (snake::scale*)std::realloc(_data, _cap * sizeof(snake::scale));
                else _data = (snake::scale*)std::malloc(_cap * sizeof(snake::scale));
                if (_data == 0) throw error::grow;
                _cap = __cap;
            }
        }

        void _append(const snake::scale& _scale = snake::scale{0, 0}) {
            _grow();
            _data[_size].x = _scale.x;
            _data[_size].y = _scale.y;
            _size++;
        }

        void _push() {
            if (_size == 0) throw error::dead;
            _grow();
            _data[_size].x = _data[_size - 1].x + _dir.x;
            _data[_size].y = _data[_size - 1].y + _dir.y;
            _size++;
        }

        void _pop() noexcept {
            if (_size) {
                std::memmove((void*)_data, (void*)(_data + 1), _size * sizeof(snake::scale));
                _size--;
            }
        }

    public:
        snake() noexcept {}

        snake(const snake::scale& _scale1, const snake::scale& _scale2 = snake::scale{0, 0}) {
            _dir.x = _scale2.x;
            _dir.y = _scale2.y;
            _append(_scale1);
        }

        snake& kill() noexcept {
            if (_data) std::free(_data);
            _data = 0;
            _size = 0;
            _cap = 0;
            _dir.x = 0;
            _dir.y = 0;
            _food = 0;
            return *this;
        }

        snake& side(const snake::scale& _scale = snake::scale{0, 0}) noexcept {
            _dir.x = _scale.x;
            _dir.y = _scale.y;
            return *this;
        }

        snake& eat(unsigned long long int food = 1) noexcept {
            _food += food;
            return *this;
        }

        snake& move() {
            if (_food) {
                _push();
                _food--;
            } else {
                _push();
                _pop();
            }
            return *this;
        }

        snake& revive(const snake::scale& _scale = snake::scale{0, 0}) {
            kill();
            _append(_scale);
            return *this;
        }

        bool alive() const noexcept {
            if (_size == 0) return false;
            for (unsigned long long int i = 0; i < _size; i++) {
                for (unsigned long long int j = 0; j < _size; j++) {
                    if ((i != j) && ((_data[i].x == _data[j].x) && (_data[i].y == _data[j].y))) return false;
                }
            }
            return true;
        }

        unsigned long long int len() const noexcept {
            return _size;
        }

        bool empty() const noexcept {
            return _size == 0;
        }

        snake::scale head() const {
            if (_size) return _data[_size - 1];
            throw error::dead;
        }

        snake::scale tail() const {
            if (_size) return _data[0];
            throw error::dead;
        }

        const snake::scale *data() const noexcept {
            return _data;
        }

        snake::scale *data() noexcept {
            return _data;
        }

        const snake::scale *begin() const noexcept {
            return _data;
        }

        snake::scale *begin() noexcept {
            return _data;
        }

        const snake::scale *end() const noexcept {
            return _data + _size;
        }

        snake::scale *end() noexcept {
            return _data + _size;
        }

        friend std::ostream& operator<<(std::ostream& _cout, const snake& _snake) noexcept;
    };


    std::ostream& operator<<(std::ostream& _cout, const snake::scale& _scale) noexcept {
        return _cout << _scale.x << ' ' << _scale.y;
    }

    std::ostream& operator<<(std::ostream& _cout, const snake& _snake) noexcept {
        if (_snake._size) _cout << _snake._data[0].x << ' ' << _snake._data[0].y;
        for (unsigned long long int i = 1; i < _snake._size; i++) _cout << ", " << _snake._data[i].x << ' ' << _snake._data[i].y;
        return _cout;
    }


    namespace dir
    {
        static const snake::scale stand = snake::scale{0, 0};
        static const snake::scale up = snake::scale{0, 1};
        static const snake::scale down = snake::scale{0, -1};
        static const snake::scale left = snake::scale{-1, 0};
        static const snake::scale right = snake::scale{1, 0};
    }

    using namespace dir;
}

#endif
