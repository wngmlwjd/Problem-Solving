import sys

input = sys.stdin.readline

T = int(input())
a, b = input().strip().split('*')

for _ in range(T):
    string = input().strip()

    if len(string) < len(a) + len(b):
        print("NE")
    elif string[:len(a)] != a:
        print("NE")
    elif string[len(string) - len(b):] != b:
        print("NE")
    else:
        print("DA")