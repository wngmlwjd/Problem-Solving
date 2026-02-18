from collections import deque

N, M, S = map(int, input().split())

line = [[] for _ in range(N)]
for i in range(M):
    a, b = map(int, input().split())

    line[a - 1].append(b)
    line[b - 1].append(a)
    
for i in range(N):
    line[i].sort()
    
check = []
def dfs(n):
    global check, line, N
    
    print(n, end=" ")
    check.append(n)
    
    if len(check) == N:
        return
    
    if line[n - 1]:
        for i in range(len(line[n - 1])):
            if line[n - 1][i] not in check:
                dfs(line[n - 1][i])
                
def bfs(start):
    global line
    
    next = deque([start])
    
    check = [start]
    while next:
        n = next.popleft()
        print(n, end=" ")
        
        if line[n - 1]:
            for l in line[n - 1]:
                if l not in check:
                    next.append(l)
                    check.append(l)


dfs(S)
print()
bfs(S)