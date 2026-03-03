from collections import deque

N, K = map(int, input().split())

arr = deque([i for i in range(1, N + 1)])
output = deque()

while arr:
    for i in range(K - 1):
        arr.append(arr.popleft())
    
    output.append(arr.popleft())

print('<', end='')
for i, a in enumerate(output):
    if i == N - 1:
        print(a, end='')
        break
    print(a, end=', ')
print('>', end='')