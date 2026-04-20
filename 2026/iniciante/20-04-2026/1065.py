pares = 0
for i in range(5):
    x = int(input())
    if x % 2 == 0:
        pares += 1 # pares = pares + 1
print(f"{pares} valores pares")