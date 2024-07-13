import sys

input = sys.stdin.readline

string = input().strip()

for i in range(26):
    print(string.count(chr(ord('a') + i)), end=" ")