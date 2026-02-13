N, M = map(int, input().split())

chess = [input() for _ in range(N)]

MIN = N * M
n = 0
m = 0
while True:
    cnt1 = 0
    cnt2 = 0
    for i in range(8):
        if i % 2 == 0:
            a = 'W'
            b = 'B'
        else:
            a = 'B'
            b = 'W'
        
        for j in range(8):
            cnt1 += 1 if chess[n + i][m + j] != a else 0
            cnt2 += 1 if chess[n + i][m + j] != b else 0
            
            a = 'W' if a == 'B' else 'B'
            b = 'W' if b == 'B' else 'B'
            
    cnt = cnt1 if cnt1 < cnt2 else cnt2
    MIN = MIN if MIN < cnt else cnt
    
    if m == M - 8:
        if n == N - 8:
            break
        else:
            n += 1
            m = 0
    else:
        m += 1
        
print(MIN)