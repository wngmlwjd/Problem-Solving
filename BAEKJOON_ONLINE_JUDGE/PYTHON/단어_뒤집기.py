import sys

input = sys.stdin.readline

T = int(input())

for _ in range(T):
    string = list(input().split())
    
    for str in string:
        print(''.join(reversed(str)), end=" ")
    print()