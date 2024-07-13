import sys

a = sys.stdin.readline().strip()
b = sys.stdin.readline().strip()

c = a
d = b
while len(c) != len(d):
    if len(c) < len(d):
        c += a
    else:
        d += b
        
print(int(c == d))