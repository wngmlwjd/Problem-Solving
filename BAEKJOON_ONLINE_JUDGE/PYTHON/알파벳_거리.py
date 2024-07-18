import sys

input = sys.stdin.readline

T = int(input())

for _ in range(T):
    a, b = input().strip().split()

    print("Distances: ", end="")
    for i in range(len(a)):
        print(ord(b[i]) - ord(a[i]), end=" ") if a[i] <= b[i] else print(26 - ord(a[i]) + ord(b[i]), end=" ")
    print()        