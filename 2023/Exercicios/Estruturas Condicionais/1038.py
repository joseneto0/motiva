codigo, quantidade = input().split()
codigo, quantidade = int(codigo), int(quantidade)
valor = 0
if codigo == 1:
    valor = 4
elif codigo == 2:
    valor = 4.5
elif codigo == 3:
    valor = 5
elif codigo == 4:
    valor = 2
elif codigo == 5:
    valor = 1.5
print(f"Total: R$ {quantidade * valor:.2f}")