import sys

S = sys.stdin.readline()

for s in S:
    if s.isalpha():
        for i in range(13):
            if s == 'z':
                s = 'a'
            elif s == 'Z':
                s = 'A'
            else:
                s = chr(ord(s) + 1)
    
    print(s, end='')