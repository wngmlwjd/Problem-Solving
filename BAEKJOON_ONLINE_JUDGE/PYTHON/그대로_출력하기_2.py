import sys

input = sys.stdin.readline

while True:
    string = input()
    
    if string == "":
        break
    
    print(string, end="")