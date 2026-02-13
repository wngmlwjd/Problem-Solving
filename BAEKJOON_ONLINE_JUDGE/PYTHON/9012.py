import sys
input = sys.stdin.readline

T = int(input())

for _ in range(T):
    str = input().strip()
    
    stack = list()
    output = "YES"
    for s in str:
        if s == ')':
            if len(stack) and stack[-1] == '(':
                stack.pop()
            else:
                output = "NO"
                break
        else:
            stack.append(s)
            
    if len(stack):
        output = "NO"
    
    print(output)