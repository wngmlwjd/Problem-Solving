import sys

input = sys.stdin.readline

a, b = input().strip().split()

print(int(''.join(reversed(str(int(''.join(reversed(a))) + int(''.join(reversed(b))))))))