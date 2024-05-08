soma = qntd = 0
while True:
    n = int(input())
    if (n < 0):
        break
    soma += n
    qntd += 1
print(f"{soma/qntd:.2f}")