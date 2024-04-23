salario = float(input())
if salario <= 400:
    rj15 = salario * 15/100
    print(f"Novo salario: {salario + rj15:.2f}")
    print(f"Reajuste ganho: {rj15:.2f}")
    print("Em percentual: 15 %")
elif salario <= 800:
    rj12 = salario * 12/100
    print(f"Novo salario: {salario + rj12:.2f}")
    print(f"Reajuste ganho: {rj12:.2f}")
    print("Em percentual: 12 %")
elif salario <= 1200:
    rj10 = salario * 10/100
    print(f"Novo salario: {salario + rj10:.2f}")
    print(f"Reajuste ganho: {rj10:.2f}")
    print("Em percentual: 10 %")
elif salario <= 2000:
    rj7 = salario * 7/100
    print(f"Novo salario: {salario + rj7:.2f}")
    print(f"Reajuste ganho: {rj7:.2f}")
    print("Em percentual: 7 %")
else:
    rj4 = salario * 4/100
    print(f"Novo salario: {salario + rj4:.2f}")
    print(f"Reajuste ganho: {rj4:.2f}")
    print("Em percentual: 4 %")

