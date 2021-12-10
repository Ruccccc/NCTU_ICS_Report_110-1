#include<iostream>
#include "linked_list.h"

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

    void push(int x)
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