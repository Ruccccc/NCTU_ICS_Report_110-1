#include<iostream>
typedef unsigned long size_t;

template <typename T>
struct node
{
    T data;
    node<T> *next;
};

template <typename T>
class list
{
private:
    node<T> *head; // head has no data.
    node<T> *tail; // tail is the last data.
    size_t _size = 0;

public:

    // initialize
    list()
    {
        head = new node<T>;
        tail = new node<T>;
        tail->next = NULL;
    }

    // return head
    node<T>* begin()
    {
        node<T>* n = new node<T>;
        n = head;
        return n->next;
    }

    node<T>* end()
    {
        return tail;
    }

    // return the number of element.
    size_t size()
    {
        return _size;
    }

    bool empty()
    {
        return _size==0;
    }

    // push a new node in the begin.
    void push_front(T __new)
    {
        node<T> *_new_node = new node<T>;
        _new_node->data = __new;
        _new_node->next = NULL;

        if (head->next == NULL) // when the list is empty.
        {
            head->next = _new_node;
            tail = _new_node;
        }
        else
        {
            _new_node->next = head->next;
            head->next = _new_node;
        }

        _size++;
    }

    // push a new node in the end.
    void push_back(T _new)
    {
        node<T> *_new_node = new node<T>;
        _new_node->data = _new;
        _new_node->next = NULL;
        
        if (head->next == NULL) // when the list is empty.
        {
            head->next = _new_node;
            tail = _new_node;
        }
        else
        {
            tail->next = _new_node;
            tail = _new_node;
        }

        _size++;
    }

    // delete fisrt node.
    void pop_front()
    {
        if (size() == 0) 
            return;
        
        node<T> *_tmp = head->next;
        head = _tmp;

        delete _tmp;

        _size--;
    }

    // delete last node.
    void pop_back()
    {
        node<T> *_previous = new node<T>;
        node<T> *_current = new node<T>;
        _current = head;
        
        while (_current->next != NULL)
        {
            _previous = _current;
            _current = _current->next;
        }
        
        tail = _previous;
        tail->next = NULL;

        delete _current;

        _size--;
    }

    // insert a new node into position.
    void insert(int _position, T _new)
    {
        node<T> *_previous = new node<T>;
        node<T> *_current = new node<T>;
        _current = head;

        node<T> *_new_node = new node<T>;
        _new_node->data = _new;

        for (int i = 0; i <_position; i++)
        {
            _previous = _current;
            _current  = _current->next;
        }

        _previous->next = _new_node;
        _new_node->next = _current;
    }

    // delete the element of the input index.
    void del(int _position)
    {
        node<T> *_previous = new node<T>;
        node<T> *_current  = new node<T>;
        _current = head;

        for (int i = 0; i < _position; i++)
        {
            _previous = _current;
            _current  = _current->next;
        }

        _previous->next = _current->next;
    }

    // get the data on the input position.
    T get(int _pos)
    {
        node<T>* n = head->next;

        for (int i = 0; i < _pos; i++)
        {
            n = n->next;
        }

        return n->data;
    }

    friend std::ostream& operator<<(std::ostream& os, list<T> &l)
    {
        node<T>* n = new node<T>;
        n = l.begin();
        while (n != NULL)
        {
            os << n->data;
            n = n->next;
            if (n != NULL)
                os << " ";
        }
        return os;
    }
};