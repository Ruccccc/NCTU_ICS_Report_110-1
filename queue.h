#include <iostream>
#include "linked_list.h"

template <typename T>
class queue
{
private:

    list<T> basis;

    size_t _size = 0;

public:

    void push_back(T _new)
    {
        basis.push_back(_new);
    }

    void push_front(T _new)
    {
        basis.push_front(_new);
    }

    T pop_back()
    {
        basis.pop_back();
    }

    T pop_front()
    {
        basis.pop_front();
    }

    T top()
    {
<<<<<<< HEAD
        basis.get(0);
    }

    T back()
    {
        basis.get(basis.size());
    }
=======
        
    }

    T back();
>>>>>>> 04f4c2cbcccb4e0c5a2dd53de68394bcd14a7cce

};