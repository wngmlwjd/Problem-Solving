import sys

input = sys.stdin.readline

N = int(input())
cnt = {}
for _ in range(N):
    string = input().strip()
    
    cnt[string[string.find(".") + 1:]] = cnt.get(string[string.find(".") + 1:], 0) + 1
    
for i in sorted(cnt.items()):
    print(i[0], i[1])