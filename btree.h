#include <iostream>
#include "Dynamic_array.h"
#include "stack.h"
#include "queue.h"

struct tnode
{
    tnode* left_child;
    tnode* right_child;
    
    int data;
};

class bt
{
private:

    tnode* root = new tnode;

public:

    bt (DA<int> _init_data) //bfs
    {
        queue<tnode*> q;
        q.push(root);
        
        for (int i = 0; i < _init_data.size(); i++)
        {
            tnode* _current = q.front();
            q.pop();
            _current = new tnode;
            q.push(_current->left_child);
            q.push(_current->right_child);
            if (_init_data[i] != -1)
            {
                _current->data = _init_data[i];
            }
        }
    }

    void dfs()
    {
        stack<tnode*> stk;
        stk.push(root);
        while (!stk.empty())
        {
            tnode* _current = stk.top();
            stk.pop();
            if (_current->right_child != nullptr)
                stk.push(_current->right_child);
            if (_current->left_child != nullptr)
                stk.push(_current->left_child);
            std::cout << _current->data << " ";
        }
        std::cout << "\n";
    }

    void bfs()
    {
        queue<tnode*> que;
        que.push(root);
        while (!que.empty())
        {
            tnode* _current = que.front();
            que.pop();
            if (_current->left_child != nullptr)
                que.push(_current->left_child);
            if (_current->right_child != nullptr)
                que.push(_current->right_child);
            std::cout << _current->data << " ";
        }
        std::cout << "\n";
    }

};