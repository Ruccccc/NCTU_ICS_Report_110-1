#include <iostream>
#include "Dynamic_array.h"
using namespace std;

int main()
{
    DA<int> v;

    v.resize(10);

    for (int i = 0; i < 10; i++)
    {
        v.push(i);
    }

    while (1)
    {
        string s;
        cout << ">>> ";
        cin >> s;

        if (s == "push")
        {
            cout << "    ";
            int x; cin >> x;
            v.push(x);
        }
        else if (s == "d")
        {
            cout << "    ";
            int x; cin >> x;
            v.del(x);
        }
        else if (s == "s")
        {
            cout << v.size() << "\n";
        }
        else if (s == "w")
        {
            cout << "    ";
            int x; cin >> x;
            cout << v[x] << "\n";
        }
        else if (s == "e")
        {
            cout << "    ";
            int x; cin >> x;
            v.erase(x);
        }
        else if (s == "p")
        {
            cout << v << "\n";
        }
        else
        {
            cout << "command not found\n";
        }
    }
}