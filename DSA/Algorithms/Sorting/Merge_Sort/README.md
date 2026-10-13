# Merge Sort

## What is Merge Sort?

Merge Sort is an efficient, comparison-based sorting algorithm that follows the **Divide and Conquer** approach. It recursively divides the array into two halves until each subarray contains only one element, and then merges the sorted subarrays to produce the final sorted array.

Unlike Bubble Sort or Insertion Sort, Merge Sort has a guaranteed time complexity of **O(n log n)**, making it suitable for sorting large datasets.

---

## Algorithm

1. Divide the array into two equal halves.
2. Recursively sort the left half.
3. Recursively sort the right half.
4. Merge the two sorted halves into a single sorted array.
5. Repeat until the entire array is sorted.

---

## Example

**Array**

```text
[5, 2, 1, 4, 3]
```

### Step 1: Divide

```text
[5, 2, 1, 4, 3]

        ↓

[5, 2]      [1, 4, 3]

 ↓   ↓        ↓    ↓

[5] [2]     [1]  [4,3]

                   ↓

                 [4] [3]
```

### Step 2: Merge

| Merge | Result |
|-------|--------|
| [5] + [2] | [2, 5] |
| [4] + [3] | [3, 4] |
| [1] + [3, 4] | [1, 3, 4] |
| [2, 5] + [1, 3, 4] | [1, 2, 3, 4, 5] |

**Sorted Array**

```text
[1, 2, 3, 4, 5]
```

---

## Time Complexity

| Case | Complexity |
|------|------------|
| Best Case | **O(n log n)** |
| Average Case | **O(n log n)** |
| Worst Case | **O(n log n)** |

### Explanation

- **Best Case:** Even if the array is already sorted, Merge Sort still divides and merges the array.
- **Average Case:** The array is repeatedly divided and merged, resulting in **O(n log n)** performance.
- **Worst Case:** Merge Sort performs the same number of divisions and merges regardless of the input order.

---

## Space Complexity

| Complexity |
|------------|
| **O(n)** |

### Explanation

Merge Sort requires additional memory to store temporary arrays while merging the sorted halves.

---

## Advantages

- Efficient for large datasets.
- Guaranteed **O(n log n)** time complexity.
- Stable sorting algorithm.
- Works well for linked lists.
- Suitable for external sorting (sorting data stored on disks).

---

## Disadvantages

- Requires additional memory (**O(n)**).
- Recursive implementation may increase function call overhead.
- Slower than Quick Sort in practice for many in-memory datasets.

---

## When to Use Merge Sort

Merge Sort is recommended when:

- The dataset is large.
- Stable sorting is required.
- Predictable **O(n log n)** performance is needed.
- Sorting linked lists.
- External sorting of large files.

---

## When Not to Use Merge Sort

Avoid Merge Sort when:

- Memory usage is a concern.
- The dataset is very small.
- An in-place sorting algorithm is preferred.
- Quick Sort or Heap Sort provides better practical performance.

---

## Implementations

This repository contains implementations of Merge Sort in multiple programming languages.

| Language | File |
|----------|------|
| C++ | [`merge_sort.cpp`](./merge_sort.cpp) |
| Java | [`MergeSort.java`](./MergeSort.java) |
| Python | [`merge_sort.py`](./merge_sort.py) |

---

## Related Topics

- Bubble Sort
- Selection Sort
- Insertion Sort
- Quick Sort
- Heap Sort
- Divide and Conquer
- Time Complexity Analysis
- Space Complexity Analysis