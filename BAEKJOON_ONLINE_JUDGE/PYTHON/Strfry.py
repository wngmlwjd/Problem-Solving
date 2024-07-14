import sys

input = sys.stdin.readline

T = int(input())

for _ in range(T):
    a, b = input().strip().split()
    
    print("Possible") if sorted(a) == sorted(b) else print("Impossible")