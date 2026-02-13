word = input().lower()

cnt = [0 for _ in range(26)]
for w in word:
    cnt[ord(w) - ord('a')] += 1
    
if cnt.count(max(cnt)) > 1:
    print('?')
else:
    print(chr(cnt.index(max(cnt)) + ord('a')).upper())