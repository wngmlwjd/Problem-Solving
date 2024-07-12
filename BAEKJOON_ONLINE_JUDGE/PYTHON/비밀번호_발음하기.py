import sys

vowel = ['a', 'e', 'i', 'o', 'u']

def check1(string):
    global vowel
    
    for i in string:
        if i in vowel:
            return True
    return False

def check2(string):
    global vowel
    
    cnt1 = cnt2 = 0
    for i in string:
        if i in vowel:
            cnt1 += 1
            cnt2 = 0
        else:
            cnt1 = 0
            cnt2 += 1
        
        if cnt1 == 3 or cnt2 == 3:
            return False
    return True

def check3(string):
    for i in range(1, len(string)):
        if string[i - 1] == string[i] and string[i] != 'e' and string[i] != 'o':
            return False
    return True 

while True:
    string = sys.stdin.readline().strip()

    if string == "end":
        break
    
    output = "not acceptable."
    if check1(string):
        if check2(string):
            if check3(string):
                output = "acceptable."
                
    print("<", string, "> is ", output, sep='')