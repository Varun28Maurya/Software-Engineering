arr = [5, 2, 1, 4, 3]
target = 1
found = False

for i in range(len(arr)):
    if arr[i] == target:
        print(f"The Target is at index {i}")
        found = True
        break
        
if not found:
    print("Target not found.")
