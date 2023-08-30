t = int(input())
for i in range(t):
    s = input()
    s = s.split()
    r = ""
    for j in s:
        r += j[0]
    print(r)