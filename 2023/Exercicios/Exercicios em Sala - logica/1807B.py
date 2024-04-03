def solve():
    n = int(input())
    a = list(map(int, input().split()))
    par = impar = 0
    for i in a:
        if i % 2 == 0:
            par += i
        else:
            impar += i
    if par > impar:
        print("YES")
    else:
        print("NO")


t = int(input())
while (t > 0):
    solve()
    t -= 1