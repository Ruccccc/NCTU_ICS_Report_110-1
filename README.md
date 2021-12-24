# Data_structure
- NCTU-DAM-CS-Report

---

## Dynamic array
### member function
- size()
    - return the number of element.
    - O(1)
- capacity
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
    - delete first element that data equal to input.
    - O(n)