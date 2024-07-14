import sys

input = sys.stdin.readline

DNA = "ACGT"

N, M = map(int, input().split())
strings = [input().strip() for _ in range(N)]

output = ""
outputCnt = 0
for i in range(M):
    cnt = [0, 0, 0, 0]
    for string in strings:
        cnt[DNA.index(string[i])] += 1
        
    maxCnt = 0
    for j in range(4):
        if cnt[j] > maxCnt:
            maxCnt = cnt[j]
            n = j
    
    output += DNA[n]
    outputCnt += N - maxCnt
    
print(output)
print(outputCnt)