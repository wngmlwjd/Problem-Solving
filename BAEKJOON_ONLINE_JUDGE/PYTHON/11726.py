from collections import deque

N = int(input())

if N <= 2:
    print(N)
else:
    a = 1
    b = 2
    for i in range(N - 2):
        c = a + b
        a = b
        b = c
    
    print(c % 10007)