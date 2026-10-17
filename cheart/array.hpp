#ifndef __ARRAY_HPP__
#define __ARRAY_HPP__ 1

#include <initializer_list>
#include <algorithm>

namespace heart
{
    using flagt = bool;
    using boolean = bool;
    using bytet = unsigned char;
    using sizet = signed long long int;
    using usizet = unsigned long long int;
    using ptrt = unsigned long long int;
    using indext = signed long long int;
    using ssize = signed long long int;
    using usize = unsigned long long int;

namespace type
{
    template<typename TYPE, usizet SIZE>
    class array {
    private:
        TYPE _data[SIZE];

    public:
        static inline constexpr indext around(indext index = 0) noexcept { return ((index % SIZE) + SIZE) % SIZE; }

        inline constexpr array() noexcept = default;

        inline constexpr array(TYPE value) noexcept {
            for (indext i = 0; i < SIZE; i++) _data[i] = value;
        }

        inline constexpr array(const TYPE *data, usizet size) noexcept {
            if (data) {
                if (SIZE > size) {
                    for (indext i = 0; i < size; i++) _data[i] = data[i];
                    for (indext i = size; i < SIZE; i++) _data[i] = TYPE();
                } else for (indext i = 0; i < SIZE; i++) _data[i] = data[i];
            } else for (indext i = 0; i < SIZE; i++) _data[i] = TYPE();
        }

        template<usizet OSIZE>
        inline constexpr array(const array<TYPE, OSIZE> &arr) noexcept {
            if (SIZE > OSIZE) {
                for (indext i = 0; i < OSIZE; i++) _data[i] = arr[i];
                for (indext i = OSIZE; i < SIZE; i++) _data[i] = TYPE();
            } else for (indext i = 0; i < SIZE; i++) _data[i] = arr[i];
        }

        inline constexpr array(const std::initializer_list<TYPE> &list) noexcept {
            if (SIZE > list.size()) {
                for (indext i = 0; i < list.size(); i++) _data[i] = list.begin()[i];
                for (indext i = list.size(); i < SIZE; i++) _data[i] = TYPE();
            } else for (indext i = 0; i < SIZE; i++) _data[i] = list.begin()[i];
        }

        inline constexpr array<TYPE, SIZE> &copy(const TYPE *data = 0, usizet size = 0) noexcept {
            if (data) {
                if (SIZE > size) {
                    for (indext i = 0; i < size; i++) _data[i] = data[i];
                    for (indext i = size; i < SIZE; i++) _data[i] = TYPE();
                } else for (indext i = 0; i < SIZE; i++) _data[i] = data[i];
            } else for (indext i = 0; i < SIZE; i++) _data[i] = TYPE();
            return *this;
        }

        template<usizet OSIZE>
        inline constexpr array<TYPE, SIZE> &copy(const array<TYPE, OSIZE> &arr = array<TYPE, 0>()) noexcept {
            if (SIZE > OSIZE) {
                for (indext i = 0; i < OSIZE; i++) _data[i] = arr[i];
                for (indext i = OSIZE; i < SIZE; i++) _data[i] = TYPE();
            } else for (indext i = 0; i < SIZE; i++) _data[i] = arr[i];
            return *this;
        }

        inline constexpr array<TYPE, SIZE> clone() const noexcept {
            return array<TYPE, SIZE>(*this);
        }

        inline constexpr array<TYPE, SIZE> &swap(const TYPE *data = 0, usizet size = 0) noexcept {
            TYPE temp;
            if (SIZE > size) {
                for (indext i = 0; i < size; i++) {
                    temp = _data[i];
                    _data[i] = data[i];
                    data[i] = temp;
                }
                for (indext i = size; i < SIZE; i++) _data[i] = TYPE();
            } else {
                for (indext i = 0; i < SIZE; i++) {
                    temp = _data[i];
                    _data[i] = data[i];
                    data[i] = temp;
                }
                for (indext i = SIZE; i < size; i++) data[i] = TYPE();
            }
            return *this;
        }

        template<usizet OSIZE>
        inline constexpr array<TYPE, SIZE> &swap(array<TYPE, OSIZE> &arr = array<TYPE, 0>()) noexcept {
            TYPE temp;
            if (SIZE > OSIZE) {
                for (indext i = 0; i < OSIZE; i++) {
                    temp = _data[i];
                    _data[i] = arr[i];
                    arr[i] = temp;
                }
                for (indext i = OSIZE; i < SIZE; i++) _data[i] = TYPE();
            } else {
                for (indext i = 0; i < SIZE; i++) {
                    temp = _data[i];
                    _data[i] = arr[i];
                    arr[i] = temp;
                }
                for (indext i = SIZE; i < OSIZE; i++) arr[i] = TYPE();
            }
            return *this;
        }

        inline constexpr const TYPE *dataConst() const noexcept { return _data; }
        inline constexpr const TYPE *data() const noexcept { return _data; }
        inline constexpr TYPE *data() noexcept { return _data; }

        inline constexpr const TYPE *beginConst() const noexcept { return _data; }
        inline constexpr const TYPE *begin() const noexcept { return _data; }
        inline constexpr TYPE *begin() noexcept { return _data; }

        inline constexpr const TYPE *endConst() const noexcept { return _data + SIZE; }
        inline constexpr const TYPE *end() const noexcept { return _data + SIZE; }
        inline constexpr TYPE *end() noexcept { return _data + SIZE; }

        inline constexpr const TYPE *startConst() const noexcept { return _data; }
        inline constexpr const TYPE *start() const noexcept { return _data; }
        inline constexpr TYPE *start() noexcept { return _data; }

        inline constexpr const TYPE &firstConst() const noexcept { return _data[0]; }
        inline constexpr const TYPE &first() const noexcept { return _data[0]; }
        inline constexpr TYPE &first() noexcept { return _data[0]; }

        inline constexpr const TYPE &lastConst() const noexcept { return _data[around(-1)]; }
        inline constexpr const TYPE &last() const noexcept { return _data[around(-1)]; }
        inline constexpr TYPE &last() noexcept { return _data[around(-1)]; }

        inline constexpr const TYPE &elementConst(indext index = 0) const noexcept { return _data[around(index)]; }
        inline constexpr const TYPE &element(indext index = 0) const noexcept { return _data[around(index)]; }
        inline constexpr TYPE &element(indext index = 0) noexcept { return _data[around(index)]; }

        inline constexpr usizet size() const noexcept { return SIZE; }
        inline constexpr bool empty() const noexcept { return 0; }

        inline constexpr bool isNull() const noexcept {
            for (indext i = 0; i < SIZE; i++) if (_data[i] != TYPE()) return false;
            return true;
        }

        inline constexpr array<TYPE, SIZE> &null() noexcept {
            for (indext i = 0; i < SIZE; i++) _data[i] = TYPE();
            return *this;
        }

        inline constexpr array<TYPE, SIZE> &clear() noexcept {
            for (indext i = 0; i < SIZE; i++) _data[i] = TYPE();
            return *this;
        }

        inline constexpr bool has(TYPE value = TYPE()) const noexcept {
            for (indext i = 0; i < SIZE; i++) if (_data[i] == value) return true;
            return false;
        }

        inline constexpr indext findL(TYPE value = TYPE()) const noexcept {
            for (indext i = 0; i < SIZE; i++) if (_data[i] == value) return i;
            return -1;
        }

        inline constexpr indext findR(TYPE value = TYPE()) const noexcept {
            for (indext i = SIZE - 1; i >= 0; i--) if (_data[i] == value) return i;
            return -1;
        }

        inline constexpr array<TYPE, SIZE> &reverse() noexcept {
            TYPE temp;
            for (indext r = SIZE - 1, w = 0; w < (SIZE / 2); (r--, w++)) {
                temp = _data[r];
                _data[r] = _data[w];
                _data[w] = temp;
            }
            return *this;
        }

        inline constexpr array<TYPE, SIZE> &sort(bool (*cmp)(TYPE, TYPE) = [](TYPE a, TYPE b){ return a > b; }) {
            std::sort(_data, _data + SIZE, cmp);
            return *this;
        }

        inline constexpr array<TYPE, SIZE> &rotateR(sizet count = 1) noexcept {
            if (count < 0) return rotateL(-count);
            TYPE temp[SIZE];
            for (indext r = -count, w = 0; w < SIZE; (r++, w++)) temp[w] = _data[around(r)];
            for (indext i = 0; i < SIZE; i++) _data[i] = temp[i];
            return *this;
        }

        inline constexpr array<TYPE, SIZE> &rotateL(sizet count = 1) noexcept {
            if (count < 0) return rotateR(-count);
            TYPE temp[SIZE];
            for (indext r = count - 1, w = SIZE - 1; w >= 0; (r--, w--)) temp[w] = _data[around(r)];
            for (indext i = 0; i < SIZE; i++) _data[i] = temp[i];
            return *this;
        }

        inline constexpr array<TYPE, SIZE> &shiftR(sizet count = 1) noexcept {
            if (count < 0) return shiftL(-count);
            TYPE temp[SIZE];
            for (indext r = 0, w = around(count); w < SIZE; (r++, w++)) temp[w] = _data[r];
            for (indext i = 0; i < around(count); i++) temp[i] = TYPE();
            for (indext i = 0; i < SIZE; i++) _data[i] = temp[i];
            return *this;
        }

        inline constexpr array<TYPE, SIZE> &shiftL(sizet count = 1) noexcept {
            if (count < 0) return shiftR(-count);
            TYPE temp[SIZE];
            for (indext r = SIZE - 1, w = SIZE - around(count) - 1; w >= 0; (r--, w--)) temp[around(w)] = _data[r];
            for (indext i = SIZE - 1; i > SIZE - around(count) - 1; i--) temp[i] = TYPE();
            for (indext i = 0; i < SIZE; i++) _data[i] = temp[i];
            return *this;
        }
    };

    template<typename TYPE>
    class array<TYPE, 0> {};
}
}

#endif
