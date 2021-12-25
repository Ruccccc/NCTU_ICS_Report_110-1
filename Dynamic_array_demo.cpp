#include <iostream>
#include "Dynamic_array.h"
using namespace std;

int main()
{
    DA<int> da{1, 2, 3, 4, 5};

    cout << da << "\n\n";

    cout << "push_back 11, 12, 13\n";
    da.push(11);
    da.push(12);
    da.push(13);
    cout << da << "\n";
    cout << "size: " << da.size() << "\n\n";

    cout << "pop\n";
    da.pop();
    cout << da << "\n";
    cout << "size: " << da.size() << "\n\n";

    cout << "delete 4\n";
    da.del(4);
    cout << da << "\n\n";

    cout << "erase 4\n";
    da.erase(4);
    cout << da << "\n\n";

    return 0;
}