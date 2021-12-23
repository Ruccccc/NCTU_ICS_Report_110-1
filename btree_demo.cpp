#include <iostream>
#include "btree.h"
using namespace std;

int main()
{
    DA<int> _data{1, 2, 7, 3, 6, -1, 8, 4, 5}; // -1 for empty

    bt t(_data);

    cout << "DFS\n";
    t.dfs();
    cout << "\n";

    return 0;
}