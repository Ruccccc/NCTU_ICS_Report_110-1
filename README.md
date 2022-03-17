# Data_structure
- NCTU-DAM-CS-Report
- group nine

---

## Dynamic array
### member function
- size()
    - return the number of element.
    - O(1)
- capacity
    - retrun the capacity.
    - O(1)
- resize
    - adjust the capacity.
    - O(n)
- push
    - add a new element in the end.
    - O(1) or O(n) `decided by resize or not`
- pop
    - delete the last element.
    - O(1)
- del
    - delete the element at certain index.
    - O(n)
- erase
    - delete first element meets the input.
    - return index of the element.
    - return -1 if no element meets the input.
    - O(n^2)
- find
    - find the first element meets the input.
    - return index of the element.
    - return -1 if not found.
    - O(n)

### operator

- []
    - access the element at a position.

## Linked list
### member function
- begin
    - return the first node.
- end
    - return the last node.
- size
    - return the number of elements.
- empty
    - return if list is empty.
- push_front
    - add a new node in the front.
    - O(1)
- push_back
    - add a new node in the end.
    - O(1)
- pop_front
    - delete the first node.
    - O(1)
- pop_back
    - delete the last node.
    - O(n)
- insert
    - add a new node to a position.
    - O(n)
- del
    - delete a new node at a position.
    - O(n)

## stack
### member function
- size
    - return the number of elements.
- empty
    - return if the stack is empty.
- push
    - add a element at top.
    - O(1)
- pop
    - delete the element at top.
    - O(1)
- top
    - return the element at top.

## queue
### member function
- push
    - add a element in the end.
    - O(n)
- pop
    - delete the first element.
- front
    - return the first element.
    - O(1)
- end
    - return the last element.
    - O(1)
- size
    - return the number of elements.
    - O(1)
- empty
    - return if queue is empty.

## tree
- construct with level-order
- print with dfs
