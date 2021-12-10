#include <iostream>
#include "stack.h"
using namespace std;

int main()
{
    stack<int> stk;

    for (int i = 0; i < 10; i++)
    {
        stk.push(i);
    }

    while (1)
    {
        cout << ">>> ";
        string s;
        cin >> s;

        if (s == "push")
        {
            cout << "    ";
            int x; cin >> x;
            stk.push(x);
        }

        else if (s == "pop")
        {
            stk.pop();
        }

        else if (s == "top")
        {
            cout << stk.top() << "\n";
        }

        else if (s == "size")
        {
            cout << stk.size() << "\n";
        }

        else if (s == "empty")
        {
            stk.empty() ? cout << "is empty\n" : cout << "not empty\n";
        }

        else
        {
            cout << "command not found\n";
        }

        cout << "\n";
    }

    return 0;
}
