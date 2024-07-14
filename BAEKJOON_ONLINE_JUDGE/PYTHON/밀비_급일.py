import sys

input = sys.stdin.readline

while True:
    string = input().strip()

    if string == "END":
        break
    
    print(''.join(reversed(string)))