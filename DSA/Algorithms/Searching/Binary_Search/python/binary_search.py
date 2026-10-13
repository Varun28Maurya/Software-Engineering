arr = [1, 3, 5, 7, 9, 11, 13]
target = 7

left = 0
right = len(arr) - 1
found = -1

while left <= right:
    mid = left + (right - left) // 2  #here python dont have the data type properly that why // is used so that it must avoid the decimal and act as floor division

    if arr[mid] == target:
        found = mid
        break
    elif arr[mid] < target:
        left = mid + 1
    else:
        right = mid - 1

if found != -1:
    print("Element found at index", found)
else:
    print("Element not found")