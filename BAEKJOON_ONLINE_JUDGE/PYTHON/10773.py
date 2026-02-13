N = int(input())

arr = list()
for i in range(N):
    n = int(input())

    if n == 0:
        arr.pop()
    else:
        arr.append(n)
        
print(sum(arr))