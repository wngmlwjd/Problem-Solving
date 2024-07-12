import sys

a, b = map(int, sys.stdin.readline().strip().split())

n = "=="
if a > b:
    n = ">"
elif a < b:
    n = "<"
    
print(n)