#include <iostream>
#include <list>
#include <vector>
using namespace std;
typedef unsigned long size_t;

struct node
{
    int data;
    node *next;
};

int main()
{

    vector<int> v;
    
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }

    cout << v[11];
}