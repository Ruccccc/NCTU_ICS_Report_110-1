#include <iostream>
#include "queue.h"
using namespace std;

int main()
{
    // declare queue q.
    queue<int> q;

    // push 1 ~ 10 into q.
    for (int i = 1; i <= 10; i++)
    {
        q.push(i);
    }

    // 
    while (1)
    {
        string s;
        cout << ">>> ";
        cin >> s;

        if (s == "push")
        {
            cout << "    ";
            int x; cin >> x;
            q.push(x);
        }
        else if (s == "pop")
        {
            q.pop();
        }
        else if (s == "front")
        {
            cout << q.front() << "\n";
        }
        else if (s == "back")
        {
            cout << q.back() << "\n";
        }
        else if (s == "size")
        {
            cout << q.size() << "\n";
        }
        else
        {
            cout << "command not found\n";
        }
    }
}