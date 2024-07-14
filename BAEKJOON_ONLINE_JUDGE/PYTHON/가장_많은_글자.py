import sys

input = sys.stdin.readline

string = ""
while True:
    str = input()
    
    if not str:
        break
    
    string += str.strip().replace(" ", "")
    
cnt = []
for i in range(26):
    cnt.append(string.count(chr(ord('a') + i)))
    
output = ""
for i in range(26):
    if cnt[i] == max(cnt):
        output += chr(ord('a') + i)

print(output)