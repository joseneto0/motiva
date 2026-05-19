n = int(input())
for _ in range(n):
    m = int(input())
    dicionario = {}
    for i in range(m):
        fruta, valor = input().split()
        valor = float(valor)
        dicionario[fruta] = valor
    
    p = int(input())
    soma = 0
    for i in range(p):
        produto, quantidade = input().split()
        quantidade = int(quantidade)
        soma += quantidade * dicionario[produto]

    print(f"R$ {soma:.2f}")