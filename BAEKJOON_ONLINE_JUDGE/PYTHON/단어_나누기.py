import sys

string = input()

a = 0
b = 1
c = 2
output = []
while a < len(string) - 2:
    output.append(string[b - 1::-1] + string[c - 1:b - 1:-1] + string[len(string) - 1:c - 1:-1])
    
    if c == len(string) - 1:
        if b == len(string) - 2:
            a += 1
            b = a + 1
            c = b + 1
        else:
            b += 1
            c = b + 1
    else:
        c += 1
        
output = sorted(output)

print(output[0])