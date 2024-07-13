import sys

input = sys.stdin.readline

N = int(input())
sell = list(input().strip() for _ in range(N))
book = sorted(list(set(sell)))

cnt = 0
for i in book:
    if cnt < sell.count(i):
        cnt = sell.count(i)
        name = i

print(name)