#include<iostream>
#include"linked_list.h"
using namespace std;

int main()
{
    list<int> l;
    for (int i = 1; i <= 10; i++)
        l.push_back(i);
    
    cout << "----\n";
    while(1)
    {
        string c;
        cin >> c;
        if (c == "pushf")
        {
            int x;
            cin >> x;
            l.push_front(x);
        }
        if (c == "pushb")
        {
            int x;
            cin >> x;
            l.push_back(x);
        }
        if (c == "s")
        {
            cout << l.size();
            cout << "\n";
        }
        if (c == "popf") 
        {
            l.pop_front();
        }
        if (c == "popb")
        {
            l.pop_back();
        }
        if (c == "i") // error
        {
            int pos, data;
            cout << "pos and data:";
            cin >> pos >> data;
            l.insert(pos, data);
        }
        if (c == "d")
        {
            int pos;
            cin >> pos;
            l.del(pos);
        }
        if (c == "p")
        {
            cout << l << "\n";
        }
        cout << "\n";
    }
}
