# Bubble Sort

## What is Bubble Sort?

Bubble Sort is one of the simplest sorting algorithms. It repeatedly compares adjacent elements in an array and swaps them if they are in the wrong order. This process continues until the array is completely sorted.

The algorithm gets its name because the larger elements gradually "bubble up" to the end of the array after each pass.

---

## Algorithm

1. Start from the beginning of the array.
2. Compare each pair of adjacent elements.
3. If the current element is greater than the next element, swap them.
4. Continue comparing and swapping until the end of the array is reached.
5. Repeat the process for the remaining unsorted portion of the array.
6. Stop when a complete pass is made without any swaps (optimized version) or after `n - 1` passes.

---

## Example

**Array**

```text
[5, 2, 1, 4, 3]
```

### Pass 1

| Comparison | Swap? | Array |
|------------|-------|-------|
| 5 & 2 | Yes | [2, 5, 1, 4, 3] |
| 5 & 1 | Yes | [2, 1, 5, 4, 3] |
| 5 & 4 | Yes | [2, 1, 4, 5, 3] |
| 5 & 3 | Yes | [2, 1, 4, 3, 5] |

### Pass 2

| Comparison | Swap? | Array |
|------------|-------|-------|
| 2 & 1 | Yes | [1, 2, 4, 3, 5] |
| 2 & 4 | No | [1, 2, 4, 3, 5] |
| 4 & 3 | Yes | [1, 2, 3, 4, 5] |

### Pass 3

No swaps are performed.

**Sorted Array**

```text
[1, 2, 3, 4, 5]
```

---

## Time Complexity

| Case | Complexity |
|------|------------|
| Best Case | **O(n)** |
| Average Case | **O(n²)** |
| Worst Case | **O(n²)** |

### Explanation

- **Best Case:** The array is already sorted, and only one pass is needed (optimized Bubble Sort).
- **Average Case:** Elements are randomly arranged, requiring multiple comparisons and swaps.
- **Worst Case:** The array is sorted in reverse order, requiring the maximum number of comparisons and swaps.

---

## Space Complexity

| Complexity |
|------------|
| **O(1)** |

### Explanation

Bubble Sort is an in-place sorting algorithm and requires only a constant amount of extra memory.

---

## Advantages

- Simple and easy to understand.
- Easy to implement.
- In-place sorting algorithm (`O(1)` auxiliary space).
- Stable sorting algorithm.
- Can detect an already sorted array in the optimized version.

---

## Disadvantages

- Inefficient for large datasets.
- Requires many comparisons and swaps.
- Much slower than advanced sorting algorithms like Merge Sort and Quick Sort.
- Poor average and worst-case performance (`O(n²)`).

---

## When to Use Bubble Sort

Bubble Sort is recommended when:

- The dataset is very small.
- Simplicity is more important than performance.
- The array is nearly sorted.
- It is used for educational purposes to understand sorting concepts.

---

## When Not to Use Bubble Sort

Avoid Bubble Sort when:

- The dataset is large.
- High performance is required.
- Faster sorting algorithms such as Merge Sort, Quick Sort, or Heap Sort are available.

---

## Implementations

This repository contains implementations of Bubble Sort in multiple programming languages.

| Language | File |
|----------|------|
| C++ | [`bubble_sort.cpp`](./bubble_sort.cpp) |
| Java | [`BubbleSort.java`](./BubbleSort.java) |
| Python | [`bubble_sort.py`](./bubble_sort.py) |

---

## Related Topics

- Selection Sort
- Insertion Sort
- Merge Sort
- Quick Sort
- Heap Sort
- Time Complexity Analysis
- Space Complexity Analysis