import sys

N = int(input())
straw = [int(sys.stdin.readline().strip()) for _ in range(N)]

straw.sort(reverse=True)

output = -1
a = 0
b = 1
c = 2
while True:
    if straw[a] < straw[b] + straw[c]:
        output = straw[a] + straw[b] + straw[c]
        break
    
    if c == N - 1:
        break
    
    a += 1
    b = a + 1
    c = b + 1
    
print(output)
