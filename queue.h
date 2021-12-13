typedef unsigned long size_t;
#include "linked_list.h"

template <typename T>
class queue
{
private:

    list<T> basis;

public:

    void push(T _new)
    {
        basis.push_back(_new);
    }

    T pop()
    {
        T x = basis.get(0);
        basis.pop_front();
        return x;
    }

    T front()
    {
        return basis.get(0);
    }

    T back()
    {
        return basis.get(basis.size()-1);
    }

    size_t size()
    {
        return basis.size();
    }

};