salario = float(input())
if salario <= 400:
    perc = 15
elif salario <= 800:
    perc = 12
elif salario <= 1200:
    perc = 10
elif salario <= 2000:
    perc = 7
else:
    perc = 4

reajuste = salario * perc / 100
novo_salario = salario + reajuste

print(f"Novo salario: {novo_salario:.2f}")
print(f"Reajuste ganho: {reajuste:.2f}")
print(f"Em percentual: {perc} %")