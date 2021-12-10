#include<iostream>
#include<list>
using namespace std;
typedef unsigned long size_t;

struct node
{
    int data;
    node *next;
};

int main()
{

    node *a = new node();
    node *b = new node();

    b->data = 1;
    b->next = NULL;
    a->next = b;

    if (b->next == NULL) cout << "Yes\n";
    
}