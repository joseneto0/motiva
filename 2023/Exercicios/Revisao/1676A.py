t = int(input())
for i in range(t):
    s = input()
    soma1 = soma2 = 0
    for j in range(6):
        if j < 3:
            soma1 += int(s[j])
        else:
            soma2 += int(s[j])
    if soma1 == soma2:
        print("YES")
    else:
        print("NO")