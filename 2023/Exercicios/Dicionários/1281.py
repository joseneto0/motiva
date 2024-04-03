n = int(input())
for _ in range(n):
    m = int(input())
    dicio = {}
    for i in range(m):
        fruta, preco = input().split()
        dicio[fruta] = float(preco)
    p = int(input())
    soma = 0
    for i in range(p):
        fruta, qntd = input().split()
        soma += dicio[fruta] * int(qntd)
    print(f"R$ {soma:.2f}")