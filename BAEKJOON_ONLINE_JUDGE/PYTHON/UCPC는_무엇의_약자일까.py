import sys

input = sys.stdin.readline

string = input().strip()

output = "I hate UCPC"
if "U" in string:
    string = string[string.index("U"):]
    if "C" in string:
        string = string[string.index("C"):]
        if "P" in string:
            string = string[string.index("P"):]
            if "C" in string:
                output = "I love UCPC"
                
print(output)