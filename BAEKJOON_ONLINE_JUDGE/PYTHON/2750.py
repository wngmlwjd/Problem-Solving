import sys

N = int(input())
arr = list(int(sys.stdin.readline().strip()) for _ in range(N))

def merge(arr, left, mid, right):
    temp = []
    
    a = left
    b = mid + 1
    while a <= mid and b <= right:
        if arr[a] <= arr[b]:
            temp.append(arr[a])
            a += 1
        else:
            temp.append(arr[b])
            b += 1
            
    while a <= mid:
        temp.append(arr[a])
        a += 1
    while b <= right:
        temp.append(arr[b])
        b += 1
    
    for i in range(len(temp)):
        arr[i + left] = temp[i]

def merge_sort(arr, left, right):
    if left < right:
        mid = (left + right) // 2
        
        merge_sort(arr, left, mid)
        merge_sort(arr, mid + 1, right)
        
        merge(arr, left, mid, right)

merge_sort(arr, 0, N - 1)

for a in arr:
    print(a)