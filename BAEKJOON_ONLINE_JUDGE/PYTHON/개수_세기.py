import sys

N = int(input())
input_list = list(map(int, input().split()))
n = int(input())

count = 0
for i in input_list:
    if i == n:
        count += 1
        
print(count)