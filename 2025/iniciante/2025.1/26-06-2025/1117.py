notas = []
while len(notas) < 2:
    x = float(input())
    if x >= 0 and x <= 10:
        notas.append(x)
    else:
        print('nota invalida')
media = sum(notas) / len(notas)
print(f'media = {media:.2f}')