from collections import deque

T = int(input())

while T:
    N, M = map(int, input().split())
    arr = deque(map(int, input().split()))
    index = deque([i for i in range(N)])

    cnt = 0
    while arr:
        if arr.index(max(arr)) > 0:
            arr.append(arr.popleft())
            index.append(index.popleft())
        else:
            if index[0] == M:
                print(cnt + 1)
                break
            
            arr.popleft()
            index.popleft()
            cnt += 1
        
    T -= 1