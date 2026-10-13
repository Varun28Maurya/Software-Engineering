arr = [5, 3, 8, 4, 2]
n = len(arr)

for i in range(n - 1):
    swapped = False

    for j in range(n - i - 1):
        if arr[j] > arr[j + 1]:
            # Swap
            arr[j], arr[j + 1] = arr[j + 1], arr[j]
            swapped = True

    # Stop if already sorted
    if not swapped:
        break

print("Sorted array:", end=" ")
for num in arr:
    print(num, end=" ")