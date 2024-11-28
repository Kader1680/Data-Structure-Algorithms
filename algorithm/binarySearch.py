def binary(arr, l, h, x):
    if h >= l:
        mid = l + (h - l) // 2
        
        # If found at mid, return mid
        if x == arr[mid]: 
            return mid
        
        # Search the right half
        elif x > arr[mid]:
            return binary(arr, mid + 1, h, x)  
        
        # Search the left half
        else:
            return binary(arr, l, mid - 1, x) 
    
    else:
        return -1

# Correct initialization with square brackets
arr = [2, 4, 7, 9, 12]
x = 9
    
result = binary(arr, 0, len(arr) - 1, x)
if result == -1:
    print("Element not found")
else:
    print("Element found at index " + str(result)) 
