import sys

input = sys.stdin.readline

N = int(input())
queue = list(range(1, N + 1))

while queue:
    print(queue[0], end=" ")
    queue.pop(0)
    
    if queue:
        queue.append(queue[0])
        queue.pop(0)