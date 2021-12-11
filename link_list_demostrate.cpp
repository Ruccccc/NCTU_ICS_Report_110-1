#include<iostream>
#include"linked_list.h"
using namespace std;

int main()
{
    list<int> l;

    while(1)
    {
        cout << ">>> ";
        string c;
        cin >> c;

        // push_front
        if (c == "psf")
        {
            cout << "    ";
            int x;
            cin >> x;
            l.push_front(x);
        }

        // push_back
        else if (c == "psb")
        {
            cout << "    ";
            int x;
            cin >> x;
            l.push_back(x);
        }

        // size
        else if (c == "s")
        {
            cout << l.size() << "\n";
        }

        // pop_front
        else if (c == "ppf") 
        {
            l.pop_front();
        }

        // pop_back
        else if (c == "ppb")
        {
            l.pop_back();
        }

        // insert
        else if (c == "i")
        {
            cout << "    ";
            int pos, data;
            cin >> pos >> data;
            l.insert(pos, data);
        }

        // delete
        else if (c == "d")
        {
            cout << "    ";
            int pos;
            cin >> pos;
            l.del(pos);
        }

        // print
        else if (c == "p")
        {
            cout << l << "\n";
        }

        else if (c == "g")
        {
            cout << "    ";
            int x;
            cin >> x;
            cout << 
        }

        else
        {
            cout << "command not found.\n";
        }

        cout << "\n";
    }
}
