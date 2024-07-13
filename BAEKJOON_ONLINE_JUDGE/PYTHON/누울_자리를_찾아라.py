import sys

input = sys.stdin.readline

N = int(input())
room = [input().strip() + "X" for _ in range(N)]
room.append("X" * N)

row = col = 0
for i in range(N):
    cnt = 0
    for j in range(N):
        if room[i][j] == '.':
            cnt += 1            
            if cnt == 2:
                row += 1
        else:
            cnt = 0
            
for i in range(N):
    cnt = 0
    for j in range(N):
        if room[j][i] == '.':
            cnt += 1            
            if cnt == 2:
                col += 1
        else:
            cnt = 0

print(row, col)