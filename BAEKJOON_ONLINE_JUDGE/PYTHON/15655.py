N, M = map(int, input().split())
arr = list(map(int, input().split()))
arr.sort()

output = []
o = []
def dfs(n):
    global N, M, arr, output, o
    
    for i in range(n, N):
        o.append(arr[i])
        
        if len(o) == M:
            output.append(o[:])
        else:
            dfs(i + 1)
        
        o.pop()

dfs(0)

for a in output:
    print(*a)