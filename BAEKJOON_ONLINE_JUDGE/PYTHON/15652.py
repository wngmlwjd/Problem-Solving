from collections import deque

N, M = map(int, input().split())
output = deque()

def dfs():
    global N, M, output
    
    if len(output) == M:
        print(*output)
        return
    
    for i in range(N):
        if len(output) and (i + 1) < output[-1]:
            continue
        
        output.append(i + 1)
        dfs()
        output.pop()
    
    return

dfs()