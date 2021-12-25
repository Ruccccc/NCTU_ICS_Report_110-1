#include <iostream>
#include "queue.h"
using namespace std;

int main()
{
    // declare queue q.
    queue<int> q;

    // push 1 ~ 10 into q.
    for (int i = 0; i < 10; i++)
        q.push(i);

    cout << "size\tfront\t\n";

    while (!q.empty())
    {
        cout << q.size() << "\t" << q.front() << "\t\n";
        q.pop();
    }
}