l = int(input())
o = input()
m = []
for i in range(12):
    m.append([0] * 12)

soma = 0
for i in range(12):
    for j in range(12):
        m[i][j] = float(input())
        if i == l:
            soma += m[i][j]

if o == 'M':
    media = soma / 12
    print(f"{media:.1f}")
else:
    print(f"{soma:.1f}")
