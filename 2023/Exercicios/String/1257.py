import string
alfa = string.ascii_uppercase
t = int(input())
for i in range(t):
    n = int(input())
    r = 0
    for j in range(n):
        s = input()
    
        for k in range(len(s)):
            r += alfa.index(s[k]) + j + k
    print(r)