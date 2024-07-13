import sys

input = sys.stdin.readline

string = input().strip()

cnt = 0
output = ""
for i in range(26):
    if string.count(chr(ord('A') + i)) % 2 == 1:
        if cnt == 1:
            cnt += 1
            output = "I'm Sorry Hansoo"
            break
        else:
            cnt += 1
            n = chr(ord('A') + i)
            output += chr(ord('A') + i) * (string.count(chr(ord('A') + i)) // 2)
    else:
        output += chr(ord('A') + i) * (string.count(chr(ord('A') + i)) // 2)

if cnt == 2:
    print(output)
elif cnt == 1:
    print(output + n + ''.join(reversed(output)))
else:
    print(output + ''.join(reversed(output)))