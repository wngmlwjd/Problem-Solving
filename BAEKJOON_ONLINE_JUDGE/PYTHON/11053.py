N = int(input())
arr = list(map(int, input().split()))

def binary_search(arr, target):
    left = 0
    right = len(arr) - 1
    
    while left <= right:
        mid = (left + right) // 2
        
        if arr[mid] < target:
            left = mid + 1
        else:
            right = mid - 1
    
    return left
    

lis = [arr[0]]
for i in range(1, N):
    if lis[-1] < arr[i]:
        lis.append(arr[i])
    else:
        index = binary_search(lis, arr[i])
        
        lis[index] = arr[i]
        
print(len(lis))
