import sys

input = sys.stdin.readline
vowel = "aeiou"

while True:
    string = input().strip().lower()
    
    if string == "#":
        break
    
    cnt = 0
    for i in vowel:
        cnt += string.count(i)
        
    print(cnt)