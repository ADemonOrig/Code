#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <initializer_list>
#include <stdexcept>


namespace type
{
    namespace detail
    {
        template<typename type>
        using decl_t = type;

        using null_t = void;

        using bool_t = bool;
        using char_t = signed char;
        using short_t = signed short int;
        using int_t = signed int;
        using long_t = signed long long int;
        using uchar_t = unsigned char;
        using ushort_t = unsigned short int;
        using uint_t = unsigned int;
        using ulong_t = unsigned long long int;

        using int8_t = signed char;
        using int16_t = signed short int;
        using int32_t = signed int;
        using int64_t = signed long long int;
        using uint8_t = unsigned char;
        using uint16_t = unsigned short int;
        using uint32_t = unsigned int;
        using uint64_t = unsigned long long int;
        using float32_t = float;
        using float64_t = double;
        using float80_t = long double;
        using float128_t = long double;

        using boolean_t = bool;
        using i8_t = signed char;
        using i16_t = signed short int;
        using i32_t = signed int;
        using i64_t = signed long long int;
        using u8_t = unsigned char;
        using u16_t = unsigned short int;
        using u32_t = unsigned int;
        using u64_t = unsigned long long int;
        using f32_t = float;
        using f64_t = double;
        using f80_t = long double;
        using f128_t = long double;

        using bit_t = bool;
        using bit8_t = unsigned char;
        using bit16_t = unsigned short int;
        using bit32_t = unsigned int;
        using bit64_t = unsigned long long int;
        using byte_t = unsigned char;
        using word_t = unsigned short int;
        using dword_t = unsigned int;
        using qword_t = unsigned long long int;

        using flag_t = bool;
        using flag8_t = unsigned char;
        using flag16_t = unsigned short int;
        using flag32_t = unsigned int;
        using flag64_t = unsigned long long int;

        using meta_t = signed long long int;
        using meta8_t = signed char;
        using meta16_t = signed short int;
        using meta32_t = signed int;
        using meta64_t = signed long long int;

        using number_t = signed long long int;
        using unumber_t = unsigned long long int;
        using fnumber_t = double;
        using num_t = signed long long int;
        using unum_t = unsigned long long int;
        using fnum_t = double;

        using ptr_t = void*;
        using iptr_t = signed long long int;
        using uptr_t = unsigned long long int;
        using size_t = signed long long int;
        using usize_t = unsigned long long int;
        using index_t = signed long long int;
        using uindex_t = unsigned long long int;
        using offset_t = signed long long int;

        using count_t = signed long long int;
        using ucount_t = unsigned long long int;

        using pos_t = signed long long int;
        using upos_t = unsigned long long int;
        using fpos_t = double;

        using mode_t = unsigned char;
        using color_t = unsigned int;

        using nulls_t = void*;
        using bytes_t = unsigned char*;
        using string_t = char*;

        template<typename type>
        using array_t = type*;

        using boolean = bool;
        using i8 = signed char;
        using i16 = signed short int;
        using i32 = signed int;
        using i64 = signed long long int;
        using u8 = unsigned char;
        using u16 = unsigned short int;
        using u32 = unsigned int;
        using u64 = unsigned long long int;
        using f32 = float;
        using f64 = double;
        using f80 = long double;
        using f128 = long double;
    }

    using namespace type::detail;


    template<typename>
    class fastpair;

    template<typename, typename>
    class pair;

    template<typename, usize_t>
    class array;

    template<typename>
    class vector;

    template<typename>
    class bytes;

    template<typename>
    class string;

    template<typename>
    class list;

    template<typename>
    class stack;

    template<typename>
    class queue;

    template<typename>
    class deque;

    template<typename>
    class map;

    template<typename>
    class set;


    template<typename _type>
    class fastpair
    {
    private:
        _type a;
        _type b;

    public:
        fastpair() noexcept {}

        fastpair(_type data1, _type data2 = _type()) noexcept {
            a = data1;
            b = data2;
        }

        template<usize_t _size>
        fastpair(const array<_type, _size>& arr) noexcept {
            if (_size >= 1) a = arr.fast(0);
            else a = _type();
            if (_size >= 2) b = arr.fast(1);
            else b = _type();
        }

        fastpair(const fastpair<_type>& data) noexcept {
            a = data.a;
            b = data.b;
        }

        fastpair<_type> clone() const noexcept {
            return fastpair<_type>(a, b);
        }

        _type data1() const noexcept {
            return a;
        }

        _type data2() const noexcept {
            return b;
        }

        fastpair<_type>& null() noexcept {
            a = _type();
            b = _type();
            return *this;
        }

        fastpair<_type>& assign1(_type data = _type()) noexcept {
            a = data;
            return *this;
        }

        fastpair<_type>& assign1(const fastpair<_type>& data) noexcept {
            a = data.a;
            return *this;
        }

        fastpair<_type>& assign2(_type data = _type()) noexcept {
            b = data;
            return *this;
        }

        fastpair<_type>& assign2(const fastpair<_type>& data) noexcept {
            b = data.b;
            return *this;
        }

        fastpair<_type>& assign(_type data1 = _type(), _type data2 = _type()) noexcept {
            a = data1;
            b = data2;
            return *this;
        }

        fastpair<_type>& assign(const fastpair<_type>& data) noexcept {
            a = data.a;
            b = data.b;
            return *this;
        }

        fastpair<_type>& swap() noexcept {
            _type temp = a;
            a = b;
            b = temp;
            return *this;
        }
    };


    template<typename _type1, typename _type2>
    class pair
    {
    private:
        _type1 a;
        _type2 b;

    public:
        pair() noexcept {}

        pair(_type1 data1, _type2 data2 = _type2()) noexcept {
            a = data1;
            b = data2;
        }

        pair(const pair<_type1, _type2>& data) noexcept {
            a = data.a;
            b = data.b;
        }

        pair<_type1, _type2> clone() const noexcept {
            return pair<_type1, _type2>(a, b);
        }

        _type1 data1() const noexcept {
            return a;
        }

        _type2 data2() const noexcept {
            return b;
        }

        pair<_type1, _type2>& null() noexcept {
            a = _type1();
            b = _type2();
            return *this;
        }

        pair<_type1, _type2>& assign1(_type1 data = _type1()) noexcept {
            a = data;
            return *this;
        }

        template<typename _type3>
        pair<_type1, _type2>& assign1(const pair<_type1, _type3>& data) noexcept {
            a = data.a;
            return *this;
        }

        pair<_type1, _type2>& assign2(_type2 data = _type2()) noexcept {
            b = data;
            return *this;
        }

        template<typename _type3>
        pair<_type1, _type2>& assign2(const pair<_type3, _type2>& data) noexcept {
            b = data.b;
            return *this;
        }

        pair<_type1, _type2>& assign(_type1 data1 = _type1(), _type2 data2 = _type2()) noexcept {
            a = data1;
            b = data2;
            return *this;
        }

        pair<_type1, _type2>& assign(const pair<_type1, _type2>& data) noexcept {
            a = data.a;
            b = data.b;
            return *this;
        }
    };


    template<typename _type, usize_t _size>
    class array
    {
    private:
        _type _data[_size];

    public:
        array() noexcept {}

        array(_type data) noexcept {
            for (index_t i = 0; i < _size; i++) _data[i] = data;
        }

        array(const std::initializer_list<_type>& il) noexcept {
            usize_t size = (_size > il.size()) ? il.size() : _size;
            for (index_t i = 0; i < size; i++) _data[i] = il.begin()[i];
        }

        template<usize_t _size2>
        array(const array<_type, _size2>& arr) noexcept {
            usize_t size = (_size > _size2) ? _size2 : _size;
            for (index_t i = 0; i < size; i++) _data[i] = arr._data[i];
            for (index_t i = size; i < _size; i++) _data[i] = _type();
        }

        array<_type, _size> clone() const noexcept {
            return array<_type, _size>(*this);
        }

        usize_t size() const noexcept {
            return _size;
        }

        usize_t len() const noexcept {
            return _size;
        }

        usize_t length() const noexcept {
            return _size;
        }

        usize_t cap() const noexcept {
            return _size;
        }

        boolean_t empty() const noexcept {
            return false;
        }

        const _type* data() const noexcept {
            return _data;
        }

        _type* data() noexcept {
            return _data;
        }

        const _type* start() const noexcept {
            return _data;
        }

        _type* start() noexcept {
            return _data;
        }

        const _type* begin() const noexcept {
            return _data;
        }

        _type* begin() noexcept {
            return _data;
        }

        const _type* end() const noexcept {
            return _data + _size;
        }

        _type* end() noexcept {
            return _data + _size;
        }

        _type first() const noexcept {
            return _data[0];
        }

        _type last() const noexcept {
            return _data[_size - 1];
        }

        _type fast(index_t index = 0) const noexcept {
            return _data[index];
        }

        _type el(index_t index = 0) const noexcept {
            return _data[((index % _size) + _size) % _size];
        }

        _type safe(index_t index = 0) const noexcept {
            if ((index >= 0) && (index < _size)) return _data[index];
            return _type();
        }

        _type at(index_t index = 0) const {
            if ((index >= 0) && (index < _size)) return _data[index];
            throw std::out_of_range("array: index out of range");
        }

        boolean_t has(_type data = _type()) const noexcept {
            for (index_t i = 0; i < _size; i++) if (_data[i] == data) return true;
            return false;
        }

        index_t find_right(_type data = _type()) const noexcept {
            for (index_t i = 0; i < _size; i++) if (_data[i] == data) return i;
            return -1;
        }

        index_t find_left(_type data = _type()) const noexcept {
            for (index_t i = _size - 1; i >= 0; i--) if (_data[i] == data) return i;
            return -1;
        }

        index_t find(_type data = _type()) const noexcept {
            return find_right(data);
        }

        array<_type, _size>& null() noexcept {
            for (index_t i = 0; i < _size; i++) _data[i] = _type();
            return *this;
        }

        array<_type, _size>& clear() noexcept {
            for (index_t i = 0; i < _size; i++) _data[i] = _type();
            return *this;
        }

        array<_type, _size>& assign(index_t index = 0, _type data = _type()) noexcept {
            _data[((index % _size) + _size) % _size] = data;
            return *this;
        }

        template<usize_t _size2>
        array<_type, _size>& assign(const array<_type, _size2>& arr) noexcept {
            usize_t size = (_size > _size2) ? _size2 : _size;
            for (index_t i = 0; i < size; i++) _data[i] = arr._data[i];
            return *this;
        }

        array<_type, _size>& fill(_type data = _type()) noexcept {
            for (index_t i = 0; i < _size; i++) _data[i] = data;
            return *this;
        }

        array<_type, _size>& fill(const _type* data, usize_t size) noexcept {
            if (data) {
                size = (_size > size) ? size : _size;
                for (index_t i = 0; i < size; i++) _data[i] = data[i];
            }
            return *this;
        }

        operator const _type*() const noexcept {
            return _data;
        }

        operator _type*() noexcept {
            return _data;
        }
    };


    template<typename _type>
    class array<_type, 0>
    {
    public:
        array() noexcept {}

        array(_type data) noexcept {}

        array(const std::initializer_list<_type>& il) noexcept {}

        template<usize_t _size2>
        array(const array<_type, _size2>& arr) noexcept {}

        array<_type, 0> clone() const noexcept {
            return array<_type, 0>();
        }

        usize_t size() const noexcept {
            return 0;
        }

        usize_t len() const noexcept {
            return 0;
        }

        usize_t length() const noexcept {
            return 0;
        }

        usize_t cap() const noexcept {
            return 0;
        }

        boolean_t empty() const noexcept {
            return true;
        }

        const _type* data() const noexcept {
            return 0;
        }

        _type* data() noexcept {
            return 0;
        }

        const _type* start() const noexcept {
            return 0;
        }

        _type* start() noexcept {
            return 0;
        }

        const _type* begin() const noexcept {
            return 0;
        }

        _type* begin() noexcept {
            return 0;
        }

        const _type* end() const noexcept {
            return 0;
        }

        _type* end() noexcept {
            return 0;
        }

        _type first() const noexcept {
            return _type();
        }

        _type last() const noexcept {
            return _type();
        }

        _type fast(index_t index = 0) const noexcept {
            return _type();
        }

        _type el(index_t index = 0) const noexcept {
            return _type();
        }

        _type safe(index_t index = 0) const noexcept {
            return _type();
        }

        _type at(index_t index = 0) const {
            throw std::out_of_range("array: index out of range");
        }

        boolean_t has(_type data = _type()) const noexcept {
            return false;
        }

        index_t find_right(_type data = _type()) const noexcept {
            return -1;
        }

        index_t find_left(_type data = _type()) const noexcept {
            return -1;
        }

        index_t find(_type data = _type()) const noexcept {
            return find_right(data);
        }

        array<_type, 0>& null() noexcept {
            return *this;
        }

        array<_type, 0>& clear() noexcept {
            return *this;
        }

        array<_type, 0>& assign(index_t index = 0, _type data = _type()) noexcept {
            return *this;
        }

        template<usize_t _size2>
        array<_type, 0>& assign(const array<_type, _size2>& arr) noexcept {
            return *this;
        }

        array<_type, 0>& fill(_type data = _type()) noexcept {
            return *this;
        }

        array<_type, 0>& fill(const _type* data, usize_t size) noexcept {
            return *this;
        }

        operator const _type*() const noexcept {
            return 0;
        }

        operator _type*() noexcept {
            return 0;
        }
    };


    template<typename _type>
    class vector
    {
    private:
        _type* _data = 0;
        usize_t _size = 0;
        usize_t _cap = 0;

        boolean_t _error_grow() noexcept {
            if (_data) std::free(_data);
            _data = 0;
            _size = 0;
            _cap = 0;
            return true;
        }

        boolean_t _grow(usize_t size = 0) noexcept {
            if (size > _cap) {
                if (_cap == 0) _cap = 1;
                while (size > _cap) {
                    if ((_cap << 1) <= _cap) return _error_grow();
                    _cap <<= 1;
                }
                if (_data) _data = (_type*)std::realloc(_data, _cap * sizeof(_type));
                else _data = (_type*)std::malloc(_cap * sizeof(_type));
                if (_data == 0) return _error_grow();
            } else if (size < _cap) {
                if (size == 0) _error_grow();
                else {
                    while (_cap > size) _cap >>= 1;
                    _cap <<= 1;
                    if (_data) _data = (_type*)std::realloc(_data, _cap * sizeof(_type));
                    else _data = (_type*)std::malloc(_cap * sizeof(_type));
                    if (_data == 0) return _error_grow();
                }
            }
            return false;
        }

    public:
        vector() noexcept {}

        vector(usize_t size) noexcept {
            _grow(size);
        }

        vector(usize_t size, _type data) noexcept {
            if (_grow(size)) return;
            for (index_t i = 0; i < size; i++) _data[i] = data;
            _size = size;
        }

        template<usize_t _size2>
        vector(const array<_type, _size2>& arr) noexcept {
            if (_grow(arr.size())) return;
            for (index_t i = 0; i < arr.size(); i++) _data[i] = arr.fast(i);
            _size = arr.size();
        }

        vector(const vector<_type>& vec) noexcept {
            if (_grow(vec._size)) return;
            for (index_t i = 0; i < vec._size; i++) _data[i] = vec._data[i];
            _size = vec._size;
        }

        vector<_type> clone() const noexcept {
            return vector<_type>(*this);
        }

        usize_t size() const noexcept {
            return _size;
        }

        usize_t len() const noexcept {
            return _size;
        }

        usize_t length() const noexcept {
            return _size;
        }

        usize_t cap() const noexcept {
            return _cap;
        }

        boolean_t empty() const noexcept {
            return (_data == 0) || (_size == 0) || (_cap == 0);
        }

        const _type* data() const noexcept {
            return _data;
        }

        _type* data() noexcept {
            return _data;
        }

        const _type* start() const noexcept {
            return _data;
        }

        _type* start() noexcept {
            return _data;
        }

        const _type* begin() const noexcept {
            return _data;
        }

        _type* begin() noexcept {
            return _data;
        }

        const _type* end() const noexcept {
            return _data + _size;
        }

        _type* end() noexcept {
            return _data + _size;
        }

        _type first() const noexcept {
            return (_size) ? (_data[0]) : (_type());
        }

        _type last() const noexcept {
            return (_size) ? (_data[_size - 1]) : (_type());
        }

        _type fast(index_t index = 0) const noexcept {
            return _data[index];
        }

        _type safe(index_t index = 0) const noexcept {
            if ((index >= 0) && (index < _size)) return _data[index];
            return _type();
        }

        _type el(index_t index = 0) const noexcept {
            if (_size) return _data[((index % _size) + _size) % _size];
            return _type();
        }

        _type at(index_t index = 0) const {
            if ((index >= 0) && (index < _size)) return _data[index];
            throw std::out_of_range("vector: index out of range");
        }

        boolean_t has(_type data = _type()) const noexcept {
            for (index_t i = 0; i < _size; i++) if (_data[i] == data) return true;
            return false;
        }

        index_t find_right(_type data = _type()) const noexcept {
            for (index_t i = 0; i < _size; i++) if (_data[i] == data) return i;
            return -1;
        }

        index_t find_left(_type data = _type()) const noexcept {
            for (index_t i = _size - 1; i >= 0; i--) if (_data[i] == data) return i;
            return -1;
        }

        index_t find(_type data = _type()) const noexcept {
            return find_right(data);
        }

        vector<_type>& null() noexcept {
            _error_grow();
            return *this;
        }

        vector<_type>& clear() noexcept {
            _error_grow();
            return *this;
        }

        vector<_type>& assign(index_t index, _type data) noexcept {
            if (_size) _data[((index % _size) + _size) % _size] = data;
            return *this;
        }

        vector<_type>& assign(const _type* data = 0, usize_t size = 0) noexcept {
            if (_grow(size)) return *this;
            for (index_t i = 0; i < size; i++) _data[i] = data[i];
            _size = size;
            return *this;
        }

        vector<_type>& assign(const vector<_type>& vec) noexcept {
            if (_grow(vec._size)) return *this;
            for (index_t i = 0; i < vec._size; i++) _data[i] = vec._data[i];
            _size = vec._size;
            return *this;
        }

        vector<_type>& fill(_type data = _type()) noexcept {
            for (index_t i = 0; i < _size; i++) _data[i] = data;
            return *this;
        }

        vector<_type>& fill(const _type* data, usize_t size) noexcept {
            if (data) {
                size = (_size > size) ? size : _size;
                for (index_t i = 0; i < size; i++) _data[i] = data[i];
            }
            return *this;
        }

        vector<_type>& push(_type data = _type()) noexcept {
            if (_grow(_size + 1)) return *this;
            _data[_size] = data;
            _size += 1;
            return *this;
        }

        vector<_type>& push(const _type* data, usize_t size) noexcept {
            if (_grow(_size + size)) return *this;
            if (data) for (index_t i = 0; i < size; i++) _data[_size + i] = data[i];
            else for (index_t i = 0; i < size; i++) _data[_size + i] = _type();
            _size += size;
            return *this;
        }

        vector<_type>& push(const vector<_type>& vec) noexcept {
            if (_grow(_size + vec._size)) return *this;
            for (index_t i = 0; i < vec._size; i++) _data[_size + i] = vec._data[i];
            _size += vec._size;
            return *this;
        }

        _type pop() noexcept {
            _type temp = _type();
            if (_size > 0) {
                temp = _data[_size - 1];
                if (_grow(_size - 1)) return *this;
                _size -= 1;
            }
            return temp;
        }

        _type remove(index_t index = 0) noexcept {
            if (_size == 0) return *this;
            index = ((index % _size) + _size) % _size;
            if ((index + 1) >= _size) return pop();
            _type temp = _data[index];
            for (index_t i = index + 1; i < _size; i++) _data[i - 1] = _data[i];
            if (_grow(_size - 1)) return *this;
            _size -= 1;
            return temp;
        }

        vector<_type>& insert(index_t index = 0, _type data = _type()) noexcept {
            if (_size == 0) return push(data);
            index = ((index % _size) + _size) % _size;
            if (_grow(_size + 1)) return *this;
            for (index_t i = _size; i > index; i--) _data[i] = _data[i - 1];
            _data[index] = data;
            _size += 1;
            return *this;
        }

        vector<_type>& insert(index_t index, const _type* data, usize_t size) noexcept {
            if (size == 0) return *this;
            if (_size == 0) return push(data, size);
            index = ((index % _size) + _size) % _size;
            if (_grow(_size + size)) return *this;
            for (index_t i = _size; i >= (index + size); i--) _data[i] = _data[i - 1];
            if (data) for (index_t i = 0; i < size; i++) _data[index + i] = data[i];
            else for (index_t i = 0; i < size; i++) _data[index + i] = _type();
            _size += size;
            return *this;
        }

        vector<_type>& insert(index_t index, const vector<_type>& vec) noexcept {
            if (vec._size == 0) return *this;
            if (_size == 0) return push(vec);
            index = ((index % _size) + _size) % _size;
            if (_grow(_size + vec._size)) return *this;
            for (index_t i = _size; i >= (index + vec._size); i--) _data[i] = _data[i - 1];
            if (vec._size) for (index_t i = 0; i < vec._size; i++) _data[index + i] = vec._data[i];
            else for (index_t i = 0; i < vec._size; i++) _data[index + i] = _type();
            _size += vec._size;
            return *this;
        }

        vector<_type>& push_front(_type data = _type()) noexcept {
            return push(data);
        }

        vector<_type>& push_front(const _type* data, usize_t size) noexcept {
            return push(data, size);
        }

        vector<_type>& push_front(const vector<_type>& vec) noexcept {
            return push(vec);
        }

        vector<_type>& push_back(_type data = _type()) noexcept {
            return insert(0, data);
        }

        vector<_type>& push_back(const _type* data, usize_t size) noexcept {
            return insert(0, data, size);
        }

        vector<_type>& push_back(const vector<_type>& vec) noexcept {
            return insert(0, vec);
        }

        operator const _type*() const noexcept {
            return _data;
        }

        operator _type*() noexcept {
            return _data;
        }
    };


    class bytes
    {
    private:
        bytes_t _data = 0;
        usize_t _size = 0;
        usize_t _cap = 0;

        boolean_t _error_grow() noexcept {
            if (_data) std::free(_data);
            _data = 0;
            _size = 0;
            _cap = 0;
            return true;
        }

        boolean_t _grow(usize_t size) noexcept {
            if (size > _cap) {
                if (_cap == 0) _cap = 1;
                while (size > _cap) {
                    if ((_cap << 1) <= _cap) return _error_grow();
                    _cap <<= 1;
                }
                if (_data) _data = (byte_t*)std::realloc(_data, _cap);
                else _data = (byte_t*)std::malloc(_cap);
                if (_data == 0) return _error_grow();
            } else if (size < _cap) {
                if (size == 0) _error_grow();
                else {
                    while (_cap > size) _cap >>= 1;
                    _cap <<= 1;
                    if (_data) _data = (byte_t*)std::realloc(_data, _cap);
                    else _data = (byte_t*)std::malloc(_cap);
                    if (_data == 0) return _error_grow();
                }
            }
            return false;
        }

    public:
        bytes() noexcept {}

        bytes(usize_t size) noexcept {
            _grow(size);
        }

        bytes(usize_t size, byte_t data) noexcept {
            if (_grow(size)) return;
            if (size) std::memset(_data, data, size);
        }

        bytes(const void* data, usize_t size) noexcept {
            if (_grow(size)) return;
            if (data && size) std::memmove(_data, data, size);
        }

        template<typename _type, usize_t _size>
        bytes(const array<_type, _size>& arr) noexcept {
            if (_grow(arr.size())) return;
            if (arr.size()) std::memmove(_data, arr.data(), arr.size() * sizeof(_type));
        }

        bytes(const bytes& bts) noexcept {
            if (_grow(bts._size)) return;
            if (bts._size) std::memmove(_data, bts._data, bts._size);
        }

        bytes& clone() const noexcept {
            return bytes(_data, _size);
        }

        usize_t size() const noexcept {
            return _size;
        }

        usize_t len() const noexcept {
            return _size;
        }

        usize_t length() const noexcept {
            return _size;
        }

        usize_t cap() const noexcept {
            return _cap;
        }

        boolean_t empty() const noexcept {
            return (_data == 0) || (_size == 0) || (_cap == 0);
        }

        const bytes_t data() const noexcept {
            return _data;
        }

        bytes_t data() noexcept {
            return _data;
        }

        const bytes_t start() const noexcept {
            return _data;
        }

        bytes_t start() noexcept {
            return _data;
        }

        const bytes_t begin() const noexcept {
            return _data;
        }

        bytes_t begin() noexcept {
            return _data;
        }

        const bytes_t end() const noexcept {
            return _data + _size;
        }

        bytes_t end() noexcept {
            return _data + _size;
        }

        byte_t first() const noexcept {
            return (_size) ? (_data[0]) : 0;
        }

        byte_t last() const noexcept {
            return (_size) ? (_data[_size - 1]) : 0;
        }

        byte_t fast(index_t index = 0) const noexcept {
            return _data[index];
        }

        byte_t el(index_t index = 0) const noexcept {
            if (_size) return _data[((index % _size) + _size) % _size];
            return 0;
        }

        byte_t safe(index_t index = 0) const noexcept {
            if ((index >= 0) && (index < _size)) return _data[index];
            return 0;
        }

        byte_t at(index_t index = 0) const {
            if ((index >= 0) && (index < _size)) return _data[index];
            throw std::out_of_range("bytes:: index out of range");
        }

        bytes& null() noexcept {
            _error_grow();
            return *this;
        }

        bytes& clear() noexcept {
            _error_grow();
            return *this;
        }

        bytes& assign(const void* data = 0, usize_t size = 0) noexcept {
            if (_grow(size)) return *this;
            if (data) if (_data && size) std::memmove(_data, data, size);
            else if (_data && size) std::memset(_data, 0, size);
            _size = size;
            return *this;
        }

        bytes& assign(const bytes& bts) noexcept {
            if (_grow(bts._size)) return *this;
            if (bts._data) if (_data && bts._size) std::memmove(_data, bts._data, bts._size);
            else if (_data && bts._size) std::memset(_data, 0, bts._size);
            _size = size;
            return *this;
        }

        bytes& fill(byte_t data = 0) noexcept {
            if (_size) std::memset(_data, data, _size);
            return *this;
        }

        bytes& read(const void* data = 0, usize_t size = 0) noexcept {
            if (_grow(_size + size)) return *this;
            if (data) if (_data && size) std::memmove(_data + _size, data, size);
            else if (_data && size) std::memset(_data + _size, 0, size);
            _size += size;
            return *this;
        }

        bytes& write(void* data = 0, usize_t size = 0) noexcept {
            if (data && size) {
                if (size <= _size) {
                    if (_data) std::memmove(data, _data, size);
                    else std::memset(data, 0, size);
                } else {
                    if (_data && _size) {
                        std::memmove(data, _data, _size);
                        std::memset(data + _size, 0, size - _size);
                    }
                    else std::memset(data, 0, size);
                }
            }
            return *this;
        }

        bytes& read_file(std::FILE* file = 0) noexcept {
            if (file == 0) return *this;
            upos_t save = std::ftell();
            std::fseek(file, 0, 2);
            usize_t size = std::ftell();
            std::fseek(file, 0, 0);
            if (_grow(_size + size)) return *this;
            std::fread(_data + _size, 1, size, file);
            std::fseek(file, save, 0);
            return *this;
        }

        bytes& read_path(const string_t path = 0) noexcept {
            if (path == 0) return *this;
            std::FILE file = fopean(path, "r+");
            if (file == 0) return *this;
            std::fseek(file, 0, 2);
            usize_t size = std::ftell();
            std::fseek(file, 0, 0);
            if (_grow(_size + size)) return *this;
            std::fread(_data + _size, 1, size, file);
            std::fclose(file);
            return *this;
        }

        operator const bytes_t() const noexcept {
            return _data;
        }

        operator bytes_t() noexcept {
            return _data;
        }
    };
}

using namespace type::detail;


#undef null
#define null 0

#undef concat
#define concat(a, b) a ## b

#undef pick
#define pick(a, b, c) ((a) ? (b) : (c))

#undef min
#undef max
#define min(a, b) (((a) < (b)) ? (a) : (b))
#define max(a, b) (((a) > (b)) ? (a) : (b))
