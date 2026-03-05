N, M = map(int, input().split())
arr = list(map(int, input().split()))
arr.sort()

use = []
output = []
o = []
def dfs():
    global M, arr, use, output, o
    
    for i, a in enumerate(arr):
        if i not in use:
            o.append(a)
            use.append(i)
            
            if len(use) == M:
                output.append(o[:])
            else:
                dfs()
            
            o.pop()
            use.pop()

dfs()

for o in output:
    print(*o)