# Arrays - Part 1 (C++)

##  Topic Overview

Arrays are linear data structures that store multiple elements of the same type in contiguous memory locations.

They allow fast access using indexing and form the foundation of advanced data structures.

---

##  Key Concepts

- Contiguous memory allocation
- Index-based access (O(1))
- Linear Search (O(n))
- Binary Search (O(log n))
- Reverse Array
- Pointer Arithmetic
- Arrays passed by reference

---

## ⏱ Complexity Analysis

| Operation | Time Complexity |
|------------|----------------|
| Access     | O(1) |
| Linear Search | O(n) |
| Binary Search | O(log n) |
| Reverse | O(n) |

Space Complexity:
- Basic Array → O(n)
- Reverse (Optimized) → O(1)

---

### 1. Creating an Array
Stores elements in contiguous memory.

### 2. Finding Largest Element
Traverse and compare each element.

### 3. Linear Search
Check every element until key is found.

### 4. Binary Search
Works only on sorted arrays.
Divide search space in half each time.

### 5. Reverse Array
Two pointer technique for optimized solution.

### 6. Pointer Arithmetic
Pointer arithmetic allows movement through memory using pointer operations.

It is used to traverse arrays efficiently and understand memory layout.

arr[i] == *(arr + i)

---
