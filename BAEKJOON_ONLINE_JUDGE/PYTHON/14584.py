code = input()
N = int(input())
words = [input() for i in range(N)]

FIND = False
for i in range(26):
    for word in words:
        if word in code:
            print(code)
            FIND = True
            break
    
    if FIND:
        break
    
    code_list = list(code)
    for j in range(len(code_list)):
        if code_list[j] == 'z':
            code_list[j] = 'a'
        else:
            code_list[j] = chr(ord(code_list[j]) + 1)
    code = ''.join(code_list)