n = int(input())

anos = n // 365
resto = n % 365

mes = resto // 30
resto = resto % 30

dias = resto

print(f"{anos} ano(s)")
print(f"{mes} mes(es)")
print(f"{dias} dia(s)")