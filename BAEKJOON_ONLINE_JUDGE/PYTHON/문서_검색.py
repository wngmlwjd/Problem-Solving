import sys

input = sys.stdin.readline

string = input().strip()
sub = input().strip()

n = cnt = 0
while True:
    n = string.find(sub)
    
    if n == -1:
        break
    
    cnt += 1
    string = string[n + len(sub):]
    
print(cnt)