x, y, z = map(int, input().split())
menor = min(x, y, z)
maior = max(x, y, z)
meio = 0
if x != maior and x != menor:
    meio = x
elif y != maior and y != menor:
    meio = y
elif z != maior and z != menor:
    meio = z
print(menor)
print(meio)
print(maior)
print()
print(x)
print(y)
print(z)