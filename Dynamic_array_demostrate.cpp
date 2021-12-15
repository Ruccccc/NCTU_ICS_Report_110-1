#include <iostream>
#include "Dynamic_array.h"
using namespace std;

int main()
{
    DA<int> da{1, 2, 3, 4, 5};

    while (1)
    {
        string s;
        cout << ">>> ";
        cin >> s;

        if (s == "push")
        {
            cout << "    ";
            int x; cin >> x;
            da.push(x);
        }
        else if (s == "d")
        {
            cout << "    ";
            int x; cin >> x;
            da.del(x);
        }
        else if (s == "s")
        {
            cout << da.size() << "\n";
        }
        else if (s == "w")
        {
            cout << "    ";
            int x; cin >> x;
            cout << da[x] << "\n";
        }
        else if (s == "e")
        {
            cout << "    ";
            int x; cin >> x;
            da.erase(x);
        }
        else if (s == "p")
        {
            cout << da << "\n";
        }
        else
        {
            cout << "command not found\n";
        }
    }
}