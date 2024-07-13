import sys

N = int(input())
name = [input() for _ in range(N)]

increasing = sorted(name)
decreasing = sorted(name, reverse=True)

if increasing == name:
    print("INCREASING")
elif decreasing == name:
    print("DECREASING")
else:
    print("NEITHER")