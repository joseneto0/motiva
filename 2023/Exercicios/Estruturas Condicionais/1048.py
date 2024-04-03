salario = float(input())
if salario <= 400:
    salarioFinal = salario + (salario * 0.15)
    perc = 15
elif salario <= 800:
    salarioFinal = salario + (salario * 0.12)
    perc = 12
elif salario <= 1200:
    salarioFinal = salario + (salario * 0.10)
    perc = 10
elif salario <= 2000:
    salarioFinal = salario + (salario * 0.07)
    perc = 7
else:
    salarioFinal = salario + (salario * 0.04)
    perc = 4
    
print(f'Novo salario: {salarioFinal:.2f}')
print(f'Reajuste ganho: {salarioFinal - salario:.2f}')
print(f'Em percentual: {perc} %')