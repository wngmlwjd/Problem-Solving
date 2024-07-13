import sys

testcase = 1

while True:
    N = int(input())

    if N == 0:
        break
    
    name = [sys.stdin.readline().strip() for _ in range(N)]
    
    if N % 2 == 0:
        sum = (N + 1) * N
    else:
        sum = (N + 1) // 2 * (N * 2)
        
    for i in range(N * 2 - 1):
        n, m = input().split()
        
        sum -= int(n)
            
    print(testcase, name[sum - 1])
    testcase += 1