import sys

input = sys.stdin.readline

N, M = map(int, input().split())

for _ in range(N):
    string = input().strip()
    
    print(''.join(reversed(string)))