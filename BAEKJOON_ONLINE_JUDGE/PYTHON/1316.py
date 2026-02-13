N = int(input())

output = 0
for i in range(N):
    word = input()

    check = [False for _ in range(26)]
    output += 1
    for i in range(len(word)):
        if i == 0:
            check[ord(word[i]) - ord('a')] = True
        elif word[i - 1] != word[i]:
            if check[ord(word[i]) - ord('a')]:
                output -= 1
                break
            else:
                check[ord(word[i]) - ord('a')] = True
            
print(output)