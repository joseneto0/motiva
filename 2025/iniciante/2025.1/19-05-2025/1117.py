notasValidas = 0
nota1 = nota2 = 0
while notasValidas < 2:
    nota = float(input())
    if nota >= 0 and nota <= 10:
        if nota1 == -1:
            nota1 = nota
        else:
            nota2 = nota
        notasValidas += 1
    else:
        print("nota invalida")
media = (nota1 + nota2) / 2
print(f"media = {media:.2f}")