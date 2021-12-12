#include "linked_list.h"
typedef unsigned long size_t;

template <typename T>
class stack
{
private:
    list<T> a;

public:

    stack()
    {
        list<T> a;
    }

    size_t size() 
    {
        return a.size(); 
    }
    
    bool empty() 
    { 
        return a.size() == 0; 
    }

    void push(T x)
    {
        a.push_front(x);
    }

    void pop()
    {
        a.pop_front();
    }

    T top()
    {
        return a.begin()->data;
    }

};