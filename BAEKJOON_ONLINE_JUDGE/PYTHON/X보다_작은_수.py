import sys

N, X = map(int, input().split())
input_list = list(map(int, input().split()))

for i in input_list:
    if i < X:
        print(i, end=' ')