#pragma once // avoid recompile

#include <iostream>

template <typename T>
class DA
{

private:
    // declare dynamic array.
    T* ptr;

    size_t _size = 0;
    size_t _capacity = 1;

protected:
    // adjust the capacity
    void expand(int _new_size)
    {
        if (_new_size == _capacity)
        {
            return;
        }
        else if (_new_size > _capacity)
        {
            T* _tmp_ptr = new T[_new_size];
            for (int i = 0; i < _size; i++)
                _tmp_ptr[i] = ptr[i];

            delete[] ptr;
            ptr = _tmp_ptr;
            _capacity = _new_size;
        }
        else
        {
            T* _tmp_ptr = new T[_new_size];

            for (int i = 0; i < _new_size; i++)
                _tmp_ptr[i] = ptr[i];

            delete[] ptr;
            ptr = _tmp_ptr;
            _capacity = _new_size;
        }
    }

public:
    DA()
    {
        ptr = new T[_capacity];
    }

    DA(int __size)
    {
        ptr = new T[__size];
        _size = _capacity = __size;
    }

    DA(int __size, T _init)
    {
        ptr = new T[__size];
        _size = _capacity = __size;

        for (int i = 0; i < __size; i++)
            ptr[i] = _init;
    }

    // initialize with initializer_list.
    DA(std::initializer_list<T> _list)
    {
        ptr = new T[_capacity];
        for (auto i : _list)
        {
            push(i);
        }
    }

    // return the number of element.
    size_t size()
    {
        return _size;
    }

    // return capacity.
    size_t capacity()
    {
        return _capacity;
    }

    // adjust the capacity.
    void resize(int _new_size)
    {
        expand(_new_size);
        _size = _new_size;
    }

    // add a new element at end.
    void push(T a)
    {
        if (_size == _capacity)
            expand(_capacity * 2);

        ptr[_size] = a;
        _size++;
    }

    // delete the last element of array.
    T pop()
    {
        T deleted = ptr[_size - 1];
        _size--;
        return deleted;
    }

    // delete the element on the index.
    void del(int index_to_del)
    {
        if (index_to_del >= _size) return;

        for (int i = index_to_del; i < _size - 1; i++)
            ptr[i] = ptr[i + 1];

        _size--;
    }

    // delete first element_to_pop.
    // return the index of the element.
    size_t erase(T element_to_pop)
    {
        int index = find(element_to_pop);
        if (index != -1)
        {
            for (int i = index; i < _size - 1; i++)
                ptr[i] = ptr[i + 1];

            _size--;
            return index;
        }
        else // if element_to_pop not found
            return index;
    }

    // return the index of element_to_find.
    int find(T element_to_find)
    {
        for (int i = 0; i < _size; i++)
        {
            if (ptr[i] == element_to_find)
                return i;
        }

        return -1;
    }

    // output
    friend std::ostream& operator<<(std::ostream& os, DA<T>& v)
    {
        for (int i = 0; i < v.size(); i++)
        {
            os << v.ptr[i];
            if (i != v.size() - 1)
                os << " ";
        }
        return os;
    }

    // get element.
    T& operator[](int _index)
    {
        return ptr[_index];
    }

    // assign
    void operator=(DA<int> _assign)
    {
        resize(_assign.size());
        for (int i = 0; i < _assign.size(); i++)
        {
            ptr[i] = _assign[i];
        }
    }
    
    // swap two DA.
    void swap(DA<int>& _x)
    {
        int* tmp;
        tmp = _x.ptr;
        _x.ptr = ptr;
        ptr = tmp;

        int tmpp = _x._capacity;
        _x._capacity = _capacity;
        _capacity = tmpp;

        tmpp = _x._size;
        _x._size = _size;
        _size = tmpp;
    }
};
