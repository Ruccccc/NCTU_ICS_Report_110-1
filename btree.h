#include <iostream>
#include "Dynamic_array.h"
#include "stack.h"
#include "queue.h"

struct tnode
{
    tnode*  left_child = NULL;
    tnode* right_child = NULL;
    
    int data;
};

class bt
{
private:

    tnode* root = new tnode;

public:

    bt (DA<int> _init_data) // bfs
    {
        queue<tnode*> q;
        tnode *_current = root;
        _current->data = _init_data[0];
        int i = 1;
        while (i < _init_data.size())
        {
            // left child
            if (_init_data[i] != -1)
            {
                tnode* _new_node = new tnode;
                _new_node->data = _init_data[i];
                _current->left_child = _new_node;
                q.push(_new_node);
            }
            i++;

            if (i == _init_data.size()) // size of data might be odd.
                break;

            // right child
            if (_init_data[i] != -1)
            {
                tnode* _new_node = new tnode;
                _new_node->data = _init_data[i];
                _current->right_child = _new_node;
                q.push(_new_node);
            }
            i++;

            _current = q.front();
            q.pop();
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
            std::cout << _current->data << " ";

            if (_current->right_child != NULL)
                stk.push(_current->right_child);
            if (_current->left_child != NULL)
                stk.push(_current->left_child);
        }
    }
    /*
    void bfs()
    {
        queue<tnode*> que;
        que.push(root);
        
        while (!que.empty())
        {
            tnode* _current = que.front();
            que.pop();
            if (_current->left_child != NULL)
                que.push(_current->left_child);
            if (_current->right_child != NULL)
                que.push(_current->right_child);
            std::cout << _current->data << " ";
        }
    }
    */
};