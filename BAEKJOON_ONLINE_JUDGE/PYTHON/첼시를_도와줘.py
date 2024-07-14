import sys

input = sys.stdin.readline

T = int(input())

for _ in range(T):
    N = int(input())
    
    print(sorted([tuple(input().strip().split()) for _ in range(N)], reverse=True, key=lambda n:int(n[0]))[0][1])