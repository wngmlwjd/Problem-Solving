import sys

input = sys.stdin.readline

string1 = input().strip()
string2 = input().strip()

cnt = 0
for i in range(26):
    cnt += max(string1.count(chr(ord('a') + i)), string2.count(chr(ord('a') + i))) - min(string1.count(chr(ord('a') + i)), string2.count(chr(ord('a') + i)))
    
print(cnt)