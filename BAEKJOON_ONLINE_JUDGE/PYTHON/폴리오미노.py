import sys

input = sys.stdin.readline

string = input().strip() + "."
output = ""

cnt = 0
for i in string:
    if i == 'X':
        cnt += 1
    else:
        if cnt % 2 == 1:
            output = "-1."
            break
        
        for _ in range(cnt // 4):
            output += "AAAA"
        for _ in range((cnt % 4) // 2):
            output += "BB"
        
        output += "."
        cnt = 0
        
print(output[:len(output) - 1])