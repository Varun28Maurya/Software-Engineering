# Insertion Sort

## What is Insertion Sort?

Insertion Sort is a simple, comparison-based sorting algorithm that builds the sorted array one element at a time. It works by taking each element from the unsorted portion of the array and inserting it into its correct position in the sorted portion.

The algorithm is similar to the way people sort playing cards in their hands by inserting each new card into the correct position.

---

## Algorithm

1. Assume the first element is already sorted.
2. Select the next element (called the **key**).
3. Compare the key with the elements before it.
4. Shift all larger elements one position to the right.
5. Insert the key into its correct position.
6. Repeat the process until all elements are sorted.

---

## Example

**Array**

```text
[5, 3, 4, 1, 2]
```

### Pass 1

| Key | Operation | Array |
|-----|-----------|-------|
| 3 | Shift 5 and insert 3 | [3, 5, 4, 1, 2] |

### Pass 2

| Key | Operation | Array |
|-----|-----------|-------|
| 4 | Shift 5 and insert 4 | [3, 4, 5, 1, 2] |

### Pass 3

| Key | Operation | Array |
|-----|-----------|-------|
| 1 | Shift 5, 4, 3 and insert 1 | [1, 3, 4, 5, 2] |

### Pass 4

| Key | Operation | Array |
|-----|-----------|-------|
| 2 | Shift 5, 4, 3 and insert 2 | [1, 2, 3, 4, 5] |

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

- **Best Case:** The array is already sorted, so each element is compared only once.
- **Average Case:** Elements are randomly arranged, requiring several shifts for each insertion.
- **Worst Case:** The array is sorted in reverse order, so every element must be shifted for each insertion.

---

## Space Complexity

| Complexity |
|------------|
| **O(1)** |

### Explanation

Insertion Sort is an in-place sorting algorithm and requires only a constant amount of extra memory.

---

## Advantages

- Simple and easy to understand.
- Easy to implement.
- Efficient for small datasets.
- Performs well on nearly sorted arrays.
- Stable sorting algorithm.
- In-place sorting algorithm (**O(1)** auxiliary space).

---

## Disadvantages

- Inefficient for large datasets.
- Requires many shifts in the average and worst cases.
- Poor average and worst-case performance (**O(n²)**).
- Slower than Merge Sort, Quick Sort, and Heap Sort for large arrays.

---

## When to Use Insertion Sort

Insertion Sort is recommended when:

- The dataset is very small.
- The array is already sorted or nearly sorted.
- Simplicity is more important than performance.
- A stable, in-place sorting algorithm is required.

---

## When Not to Use Insertion Sort

Avoid Insertion Sort when:

- The dataset is large.
- High performance is required.
- Faster algorithms such as Merge Sort, Quick Sort, or Heap Sort are available.

---

## Implementations

This repository contains implementations of Insertion Sort in multiple programming languages.

| Language | File |
|----------|------|
| C++ | [`insertion_sort.cpp`](./insertion_sort.cpp) |
| Java | [`InsertionSort.java`](./InsertionSort.java) |
| Python | [`insertion_sort.py`](./insertion_sort.py) |

---

## Related Topics

- Bubble Sort
- Selection Sort
- Merge Sort
- Quick Sort
- Heap Sort
- Time Complexity Analysis
- Space Complexity Analysis