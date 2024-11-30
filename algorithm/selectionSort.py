
def selectionSort(arr):
    # find smalltest element in list and move in 1 ndex of the array
    # 2 : find the second smallest
    
    for i in range(0, len(arr) - 1):
        curt_min_index = i
        for j in range(i + 1, len(arr)):
            if arr[j] < arr[curt_min_index]:
              curt_min_index = j
              
    # Swap the found minimum element with the first element
        arr[i], arr[curt_min_index] = arr[curt_min_index], arr[i]
              
arr = [2, 7, 89, 5, 45, 3]
selectionSort(arr)
print(arr)