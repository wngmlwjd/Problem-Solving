N = int(input())

a = 0
b = 1
while True:
    if N <= 6 * a + 1:
        print(b)
        break
    
    a += b
    b += 1