#include <iostream>
#include "linked_list.h"

template <typename T>
class queue
{
private:

    list<T> 
    size_t _size = 0;

public:

    void push_back(T _new);

    void push_front(T _new);

    T pop_back();

    T pop_front();

    T top();

    T back();

};