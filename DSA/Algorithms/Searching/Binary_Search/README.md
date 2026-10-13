# Binary Search

## What is Binary Search?

Binary Search is an efficient searching algorithm that finds the position of a target element in a **sorted array**. Instead of checking every element, it repeatedly divides the search space into half until the target is found or the search space becomes empty.

Since Binary Search eliminates half of the remaining elements after every comparison, it is significantly faster than Linear Search for large sorted datasets.

---

## Prerequisite

The array **must be sorted** before applying Binary Search.

---

## Algorithm

1. Initialize two pointers:
   - `low = 0`
   - `high = n - 1`
2. Calculate the middle index:
   - `mid = low + (high - low) / 2`
3. Compare the middle element with the target.
4. If they are equal, return the index.
5. If the target is smaller than the middle element, search the left half.
6. If the target is greater than the middle element, search the right half.
7. Repeat until the target is found or `low > high`.
8. If the target is not found, return `-1`.

---

## Example

**Sorted Array**

```text
[1, 2, 3, 4, 5]
```

**Target**

```text
4
```

| Iteration | Low | High | Mid | Element | Result |
|-----------|-----|------|-----|---------|--------|
| 1 | 0 | 4 | 2 | 3 | Search Right Half |
| 2 | 3 | 4 | 3 | 4 | Found at Index 3 |

---

## Time Complexity

| Case | Complexity |
|------|------------|
| Best Case | **O(1)** |
| Average Case | **O(log n)** |
| Worst Case | **O(log n)** |

### Explanation

- **Best Case:** The target is found at the first middle element.
- **Average Case:** The search space is halved repeatedly.
- **Worst Case:** The search continues until only one element remains or the target is not present.

---

## Space Complexity

### Iterative Binary Search

| Complexity |
|------------|
| **O(1)** |

### Recursive Binary Search

| Complexity |
|------------|
| **O(log n)** |

### Explanation

- The iterative implementation uses constant extra memory.
- The recursive implementation requires additional stack space for recursive function calls.

---

## Advantages

- Very efficient for large datasets.
- Time complexity is **O(log n)**.
- Requires fewer comparisons than Linear Search.
- Simple to implement in both iterative and recursive forms.

---

## Disadvantages

- Works only on **sorted** data.
- Sorting the data beforehand may require additional time.
- Not suitable for linked lists due to lack of direct indexing.

---

## When to Use Binary Search

Binary Search is recommended when:

- The data is sorted.
- Fast search operations are required.
- The dataset is large.
- Multiple search operations are performed.

---

## When Not to Use Binary Search

Avoid Binary Search when:

- The data is unsorted.
- The collection is very small.
- Frequent insertions or deletions occur that constantly change the order.

---

## Implementations

This repository contains implementations of Binary Search in multiple programming languages.

| Language | File |
|----------|------|
| C++ | [`binary_search.cpp`](./cpp/binary_search.cpp) |
| Java | [`BinarySearch.java`](./java/BinarySearch.java) |
| Python | [`binary_search.py`](./python/binary_search.py) |

---

## Related Topics

- Linear Search
- Jump Search
- Interpolation Search
- Exponential Search
- Ternary Search
- Time Complexity Analysis
- Space Complexity Analysis