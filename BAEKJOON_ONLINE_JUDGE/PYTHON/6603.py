from collections import deque

while True:
    lotto = list(map(int, input().split()))
    
    N = lotto[0]
    lotto = lotto[1:]
    
    if N == 0:
        break
    
    output = deque()
    def dfs(n):
        global lotto
        
        if len(output) == 6:
            print(*output)
            return
        
        for i in range(n, len(lotto)):
            output.append(lotto[i])
            dfs(i + 1)
            output.pop()
            
    dfs(0)
    print()