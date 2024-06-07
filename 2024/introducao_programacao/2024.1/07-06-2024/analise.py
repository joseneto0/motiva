s = list(input().split())
letras = input()
dicio = {}
for palavra in s:
    dicio[palavra] = 0
for palavra in s:
    for i in palavra:
        for j in letras:
            if i == j:
                dicio[palavra] += 1
               
ans = 0
for palavra in s:
    if (dicio[palavra] > 0):
        ans += 1   
print(ans)      
    