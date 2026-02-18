T = int(input())

for t in range(T):
    N = int(input())
    
    output = 0
    def dfs(sum):
        global output, N
        
        for i in range(1, 4):
            if sum + i == N:
                output += 1
                return
            elif sum + i > N:
                return
            else:
                dfs(sum + i)
                
    dfs(0)
    
    print(output)