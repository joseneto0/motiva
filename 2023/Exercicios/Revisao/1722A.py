t = int(input())
nome = "Timur"
for i in range(t):
    n = int(input())
    s = input()
    nome = sorted(nome)
    s = sorted(s)
    if nome == s:
        print("YES")
    else:
        print("NO")