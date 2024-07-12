import sys

a = int(sys.stdin.readline().strip())
b = int(sys.stdin.readline().strip())

sum = 0
n = 1
while b > 0:
    print(a * (b % 10))
    
    sum += a * (b % 10) * n
    n *= 10
    b //= 10
    
print(sum)