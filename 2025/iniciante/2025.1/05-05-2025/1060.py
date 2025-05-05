contador = 0
for i in range(6):
    x = float(input())
    if x > 0:
        contador += 1 # contador = contador + 1
print(f"{contador:.2f} valores positivos")