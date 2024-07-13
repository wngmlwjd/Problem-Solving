import sys

input = sys.stdin.readline

string = input().strip() + " "

output = ""
tag = False
for i in string:
    if i == ' ':
        if tag:
            output += i
        else:
            print(''.join(reversed(output)), end=' ')
            output = ""
    elif i == '<':
        tag = True
        print(''.join(reversed(output)), end='')
        output = "<"
    elif i == '>':
        tag = False
        print(output, end='>')
        output = ""
    else:
        output += i