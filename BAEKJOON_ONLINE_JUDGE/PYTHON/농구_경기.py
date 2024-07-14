import sys

input = sys.stdin.readline

N = int(input())

cnt = [0 for _ in range(26)]
for _ in range(N):
    string = input().strip()
    
    cnt[ord(string[0]) - ord('a')] += 1
    
output = ""
for i in range(26):
    if cnt[i] >= 5:
        output += chr(ord('a') + i)
        
print(output) if output else print("PREDAJA")