import sys

input = sys.stdin.readline

N = int(input())

minAge = 20110000
maxAge = 0
for i in range(N):
    name, a, b, c = input().split()
    
    age = int(c) * 1000 + int(b) * 100 + int(a)
    
    if age > maxAge:
        maxAge = age
        maxName = name
    if age < minAge:
        minAge = age
        minName = name
        
print(maxName, minName, sep='\n')