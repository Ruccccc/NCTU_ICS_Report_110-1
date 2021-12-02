#include<iostream>
using namespace std;
typedef unsigned long size_t;

template <typename T>
struct node
{
    T data;
    node<T> *next = new node<T>;
};

int main()
{
    node<int> *a;
    a = NULL;
    node<int> *b;
    b->data = 1;
    b->next = NULL;
    a->next = b;
    cout << a->next->data;
}