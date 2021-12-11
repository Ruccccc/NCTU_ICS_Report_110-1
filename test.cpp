<<<<<<< HEAD
#include <iostream>
#include <list>
#include <vector>
=======
#include<iostream>
#include<list>
>>>>>>> 04f4c2cbcccb4e0c5a2dd53de68394bcd14a7cce
using namespace std;
typedef unsigned long size_t;

struct node
{
    int data;
    node *next;
};

int main()
{

<<<<<<< HEAD
    vector<int> v;
    
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }

    cout << v[11];
=======
    node *a = new node();
    node *b = new node();

    b->data = 1;
    b->next = NULL;
    a->next = b;

    if (b->next == NULL) cout << "Yes\n";
    
>>>>>>> 04f4c2cbcccb4e0c5a2dd53de68394bcd14a7cce
}