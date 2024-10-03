# Heap Data Structure

A **Heap** is a specialized tree-based data structure that satisfies the **heap property**. In a heap, for any given node `C`, if `P` is a parent node of `C`, then the key (the value) of `P` is ordered with respect to the key of `C` with the same ordering being applied across the heap. A heap can be classified into two types:

1. **Max-Heap**
2. **Min-Heap**

## 1. Max-Heap

In a **Max-Heap**, the value of the parent node is always greater than or equal to the values of its children. The highest value element is always at the root.

- **Max-Heap Property**: `A[parent(i)] >= A[i]` for all `i`, where `i` is the index of the child node.

Example of a Max-Heap:

    50
   /  \
  30   20
 /  \
15   10


## 2. Min-Heap

In a **Min-Heap**, the value of the parent node is always less than or equal to the values of its children. The smallest value element is always at the root.

- **Min-Heap Property**: `A[parent(i)] <= A[i]` for all `i`, where `i` is the index of the child node.

Example of a Min-Heap:

    10
   /  \
  15   30
 /  \
50   40


## Properties of Heaps

1. **Complete Binary Tree**: Heaps are typically implemented as a complete binary tree, which means all levels of the tree are fully filled, except possibly for the last level, which is filled from left to right.
2. **Heap Operations**:
   - **Insertion**: Insert a new element at the end of the tree and then heapify-up to maintain the heap property.
   - **Deletion**: Delete the root element (max for Max-Heap and min for Min-Heap), replace it with the last element, and then heapify-down to restore the heap property.
   - **Heapify**: The process of rearranging elements to maintain the heap property. There are two types of heapify operations:
     - **Heapify-Up** (for insertion)
     - **Heapify-Down** (for deletion)
   
3. **Heap Representation in Array**: Heaps are often represented as arrays, with the root element at index 0. For any node at index `i`:
   - The left child is at index `2*i + 1`.
   - The right child is at index `2*i + 2`.
   - The parent is at index `(i - 1) / 2`.

## Time Complexity of Heap Operations

- **Insertion**: O(log n) – Inserting an element into the heap requires a comparison of the element with its parent and adjusting accordingly, hence it takes logarithmic time.
- **Deletion**: O(log n) – Deleting the root element and reheapifying the tree takes logarithmic time.
- **Peek (Finding Max/Min)**: O(1) – Since the root always contains the maximum or minimum element, it can be accessed in constant time.

## Applications of Heap

1. **Priority Queues**: Heaps are widely used to implement priority queues, where the highest (or lowest) priority element is dequeued first.
2. **Heap Sort**: A sorting algorithm based on the heap data structure. It works by inserting all elements into a heap and then repeatedly extracting the maximum element.
3. **Graph Algorithms**: Heaps are used in algorithms like **Dijkstra’s Shortest Path Algorithm** and **Prim’s Minimum Spanning Tree Algorithm**.
4. **Scheduling Systems**: Used in various operating systems to manage process scheduling.
5. **Median-Finding Algorithm**: Heaps are utilized to dynamically maintain the median of a stream of numbers.

## Heap Sort

Heap Sort is a comparison-based sorting algorithm that uses a binary heap data structure. The basic idea is to build a Max-Heap from the given elements, and then repeatedly extract the maximum element from the heap and replace it with the last element in the heap. The process is repeated for the remaining elements.

### Steps in Heap Sort:

1. **Build a Max-Heap** from the input data.
2. **Swap** the root element (maximum element) with the last element of the heap.
3. **Reduce the heap size** by 1 and heapify the root.
4. Repeat steps 2 and 3 until the heap size is 1.

**Time Complexity**: O(n log n)  
**Space Complexity**: O(1) (Heap Sort is an in-place sorting algorithm)

## Example of Heap Sort

Consider the following array: `[4, 10, 3, 5, 1]`.

1. Build a Max-Heap:
    ```
            10
           /  \
          5    3
         / \
        4   1
    ```

2. Swap the root with the last element: `[1, 5, 3, 4, 10]`.

3. Heapify the root:
    ```
            5
           / \
          4   3
         /
        1
    ```

4. Swap the root with the second last element: `[1, 4, 3, 5, 10]`.

5. Heapify the root:
    ```
            4
           / \
          1   3
    ```

6. Continue the process until the array is sorted: `[1, 3, 4, 5, 10]`.

---

For more information, refer to the original GFG article: [Heap Data Structure on GFG](https://www.geeksforgeeks.org/heap-data-structure/)
