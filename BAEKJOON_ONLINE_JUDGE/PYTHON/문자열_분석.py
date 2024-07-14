import sys

input = sys.stdin.readline

while True:
    string = input().rstrip('\n')
    
    if string == "":
        break
    
    a, b, c, d = 0, 0, 0, 0
    for i in string:
        if i == ' ':
            d += 1
        elif i.isdigit():
            c += 1
        elif i.isupper():
            b += 1
        else:
            a += 1
    
    print(a, b, c, d)