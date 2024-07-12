import sys

N, M = map(int, input().split())
input_list = list(map(int, input().split()))

sum = []
for i in range(0, N - 2):
    for j in range(i + 1, N - 1):
        for k in range(j + 1, N):
            if input_list[i] + input_list[j] + input_list[k] <= M:
                sum.append(input_list[i] + input_list[j] + input_list[k])
                
print(max(sum))