while True:
    try:
        N = int(input())
        
        M = 1
        cnt = 1
        while M % N:
            M = M * 10 + 1
            cnt += 1
            
        print(cnt)
        
    except EOFError:
        break