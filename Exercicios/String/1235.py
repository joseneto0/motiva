t = int(input())
for i in range(t):
    s = input()
    r = ""
    for i in range(len(s) // 2-1, -1, -1):
        r += s[i]
    for i in range(len(s)-1, len(s)//2-1,-1):
        r += s[i]
    print(r)