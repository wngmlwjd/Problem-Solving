from collections import deque

N, M = map(int, input().split())
output = deque()

def dfs():
    global N, M, output
    
    if len(output) == M:
        print(*output)
        return
    
    for i in range(N):
        if (i + 1) not in output:
            output.append(i + 1)
            dfs()
            output.pop()
    
    return

dfs()