/*
    Filename : 09_09_110652011_b.h
    Auther   : 110652011 郭佳翰
    Descript : define a class simailar to vector with function:
               1. size
               2. capacity
               3. resize
               4. push
               5. pop
               6. delete
               7. erase
               8. find
*/
#include <iostream>

template <typename T>
class vector
{
    
private:

    // declare dynamic array.
    T* ptr = new T[1];

    size_t _size = 0;
    size_t _capacity = 1;

public:

    // return the number of element.
    size_t size()
    {
        return _size;
    }

    // return capacity.
    size_t capcasity()
    {
        return _capacity;
    }

    // adjust the capacity.
    void resize(int _new_size)
    {
        if (_new_size == _capacity)
        {
            return;
        }
        else if (_new_size > _capacity)
        {
            T *_tmp_ptr = new T[_new_size];
            for (int i = 0; i < _size; i++)
                _tmp_ptr[i] = ptr[i];
            
            delete [] ptr;
            ptr = _tmp_ptr;
            _capacity = _new_size;
        }
        else
        {
            T* _tmp_ptr = new T[_new_size];

            for (int i = 0; i < _new_size; i++)
                _tmp_ptr[i] = ptr[i];

            delete [] ptr;
            ptr = _tmp_ptr;
            _size = _capacity = _new_size;
        }
    }

    // add a new element at end.
    void push(T a)
    {
        if (_size == _capacity)
            resize(_capacity*2);
        
        ptr[_size] = a;
        _size++;
    }
    
    // delete the last element of array.
    T pop()
    {
        T deleted = ptr[_size-1];
        _size--;
        return deleted;
    }
    
    // delete the element on the index.
    void del(int index_to_del)
    {
        if (index_to_del > _size) return;
        
        for (int i = index_to_del; i < _size - 2; i++)
            ptr[i] = ptr[i+1];
        
        _size--;
    }
    
    // delete first element_to_pop.
    // return the index of the element.
    size_t erase(T element_to_pop)
    {
        int index = find(element_to_pop);
        if (index != -1)
        {
            for (int i = index; i < _size-1; i++)
                ptr[i] = ptr[i+1];
        
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
/*
    friend std::ostream& operator<<(std::ostream& os, vector<T> &v)
    {
        for (int i = 0; i < v.size(); i++)
        {
            os << v.ptr[i];
            if (i != v.size()-1)
                os << " ";
        }
        return os;
    }
*/
    T operator[](int _index)
    {
        return ptr[_index];
    }
};
