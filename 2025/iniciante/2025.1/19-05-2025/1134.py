qntd_alcool = 0
qntd_gasolina = 0
qntd_diesel = 0
produto = int(input())
while produto != 4:
  if produto == 1:
    qntd_alcool += 1
  elif produto == 2:
    qntd_gasolina += 1
  elif produto == 3:
    qntd_diesel += 1
  produto = int(input())
print('MUITO OBRIGADO')
print(f'Alcool: {qntd_alcool}')
print(f'Gasolina: {qntd_gasolina}')
print(f'Diesel: {qntd_diesel}')