#include <iostream>
#include "btree.h"
using namespace std;

int main()
{
    DA<int> _data{1, 2, 7, 3, 6, 8, 4, 5};

    bt t(_data);

    t.dfs();

    t.bfs();

    return 0;
}