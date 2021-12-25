#include <iostream>
#include "stack.h"
using namespace std;

int main()
{
    stack<int> s;
    for (int i = 0; i < 10; i++)
        s.push(i);
    
    cout << "size\ttop\t\n";
    while (!s.empty())
    {
        cout << s.size() << "\t" << s.top() << "\t\n";
        s.pop();
    }
    
    return 0;
}
