# Linear Search

## What is Linear Search?

Linear Search is the simplest searching algorithm. It searches for a target element by checking each element in the array sequentially from the beginning until the element is found or the end of the array is reached.

Unlike Binary Search, Linear Search does **not** require the data to be sorted, making it suitable for both sorted and unsorted collections.

---

## Algorithm

1. Start from the first element of the array.
2. Compare the current element with the target value.
3. If the current element matches the target, return its index.
4. Otherwise, move to the next element.
5. Repeat until the target is found or all elements have been checked.
6. If the target is not found, return `-1` or display an appropriate message.

---

## Example

**Array**

```text
[5, 2, 1, 4, 3]
```

**Target**

```text
1
```

| Iteration | Current Element | Comparison | Result |
|-----------|-----------------|------------|--------|
| 1 | 5 | 5 == 1 | Not Found |
| 2 | 2 | 2 == 1 | Not Found |
| 3 | 1 | 1 == 1 | Found at Index 2 |

---

## Time Complexity

| Case | Complexity |
|------|------------|
| Best Case | **O(1)** |
| Average Case | **O(n)** |
| Worst Case | **O(n)** |

### Explanation

- **Best Case:** The target element is the first element in the array.
- **Average Case:** The target is located somewhere in the middle.
- **Worst Case:** The target is the last element or does not exist in the array.

---

## Space Complexity

| Complexity |
|------------|
| **O(1)** |

### Explanation

Linear Search uses only a constant amount of extra memory regardless of the input size.

---

## Advantages

- Simple and easy to implement.
- Works on both sorted and unsorted arrays.
- Does not require preprocessing or sorting.
- Suitable for small datasets.
- Constant auxiliary space (`O(1)`).

---

## Disadvantages

- Inefficient for large datasets.
- May require checking every element.
- Slower than Binary Search on sorted data.
- Performance degrades as the dataset grows.

---

## When to Use Linear Search

Linear Search is recommended when:

- The dataset is small.
- The data is unsorted.
- Simplicity is preferred over optimization.
- Only a few search operations are required.

---

## When Not to Use Linear Search

Avoid Linear Search when:

- The dataset is large.
- Frequent search operations are required.
- The data is already sorted, in which case Binary Search provides significantly better performance.

---

## Implementations

This repository contains implementations of Linear Search in multiple programming languages.

| Language | File |
|----------|------|
| C++ | [`linear_search.cpp`](./linear_search.cpp) |
| Java | [`LinearSearch.java`](./LinearSearch.java) |
| Python | [`linear_search.py`](./linear_search.py) |

---

## Related Topics

- Binary Search
- Jump Search
- Interpolation Search
- Exponential Search
- Time Complexity Analysis
- Space Complexity Analysis