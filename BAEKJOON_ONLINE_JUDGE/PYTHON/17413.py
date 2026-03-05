import sys

string = sys.stdin.readline().strip()

output = ""
word = ""
d = 0
for s in string:
    if s == '<':
        output += word[::-1]
        word = s
        d = 1
    elif s == '>':
        output += word + s
        word = ""
        d = 0
    elif s == ' ':
        if d == 0:
            output += word[::-1] + s
            word = ""
        else:
            word += s
    else:
        word += s

print(output + word[::-1])