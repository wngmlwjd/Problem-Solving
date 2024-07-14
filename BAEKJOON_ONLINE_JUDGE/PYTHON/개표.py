import sys

input = sys.stdin.readline

N = int(input())
cnt = input().strip().count('A')

if cnt == N - cnt:
    print("Tie")
elif cnt > N - cnt:
    print("A")
else:
    print("B")