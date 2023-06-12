horaInicio, minutoInicio, horaFinal, minutoFinal = map(int, input().split())
minutoInicio += horaInicio * 60
minutoFinal += horaFinal * 60

totalSegundos = minutoFinal - minutoInicio
if totalSegundos <= 0:
    totalSegundos += 24 * 60

horas = totalSegundos // 60
minutos = totalSegundos % 60
print(f'O JOGO DUROU {horas} HORA(S) E {minutos} MINUTO(S)')