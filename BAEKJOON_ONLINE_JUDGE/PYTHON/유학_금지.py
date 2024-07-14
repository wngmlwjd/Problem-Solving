import sys

input = sys.stdin.readline

string = input().strip()
word = "CAMBRIDGE"

for i in string:
    if i not in word:
        print(i, end='')