typedef unsigned long size_t;
#include "linked_list.h"

template <typename T>
class queue
{
private:

    list<T> basis;

public:

    // new a element to the end of queue.
    void push(T _new)
    {
        basis.push_back(_new);
    }

    // delete and retrun the first element of queue.
    void pop()
    {
        basis.pop_front();
    }

    // return the first element of queue.
    T front()
    {
        return basis.get(0);
    }

    // return the last element of queue.
    T back()
    {
        return basis.get(basis.size()-1);
    }

    // return the number of element of queue
    size_t size()
    {
        return basis.size();
    }

    // return if queue is empty.
    bool empty()
    {
        return basis.size() == 0;
    }

};