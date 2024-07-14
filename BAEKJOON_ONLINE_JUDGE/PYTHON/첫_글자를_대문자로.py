import sys

input = sys.stdin.readline

T = int(input())

for _ in range(T):
    string = input().strip()
    
    print(string[0].upper() + string[1:])