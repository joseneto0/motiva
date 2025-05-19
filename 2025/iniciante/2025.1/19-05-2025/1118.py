soma_notas = 0
qntd_nota = 0
continuar_codigo = True
while continuar_codigo == True:
  nota = float(input())
  if nota >= 0 and nota <= 10:
    soma_notas += nota
    qntd_nota += 1
    
    if qntd_nota == 2:
      print(f'media = {soma_notas / 2:.2f}')
      qntd_nota = 0
      soma_notas = 0
      
      while True:
        print('novo calculo (1-sim 2-nao)')
        novo_calculo = int(input())
        if novo_calculo == 2:
          continuar_codigo = False
          break
        elif novo_calculo == 1:
          continuar_codigo = True
          break
  else:
    print('nota invalida')