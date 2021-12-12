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
        basis.pop_front();
    }

    T front()
    {
        basis.get(0);
    }

    T back()
    {
        basis.get(basis.size());
    }

    size_t size()
    {
        basis.size();
    }

};