#include<iostream>
#include"linked_list.h"
using namespace std;

int main()
{
    list<int> l;

    for (int i = 0; i < 5; i++)
        l.push_back(i);
    
    cout << l << "\n\n";

    cout << "push_back 21, 22, 23\n";
    l.push_back(21);
    l.push_back(22);
    l.push_back(23);
    cout << l << "\n";
    cout << "size: " << l.size() << "\n\n";

    cout << "push_front 24, 25, 26\n";
    l.push_front(24);
    l.push_front(25);
    l.push_front(26);
    cout << l << "\n";
    cout << "size: " << l.size() << "\n\n";

    cout << "pop_back twice\n";
    int t = 2;
    while (t--)
        l.pop_back();
    cout << l << "\n";
    cout << "size: " << l.size() << "\n\n";

    cout << "pop_front three times\n";
    t = 3;
    while (t--)
        l.pop_front();
    cout << l << "\n";
    cout << "size: " << l.size() << "\n\n";

    cout << "insert 10 at index 4\n";
    l.insert(4, 10);
    cout << l << "\n\n";

    cout << "delete the element at index 2\n";
    l.del(2);
    cout << l << "\n\n";

    return 0;
}
