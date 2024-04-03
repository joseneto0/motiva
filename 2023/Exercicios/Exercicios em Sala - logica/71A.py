def solve():
    s = input()
    if len(s) > 10:
        print(s[0] + str(len(s)-2) + s[len(s)-1])
    else:
        print(s)

t = int(input())
while (t > 0):
    solve()
    t -= 1