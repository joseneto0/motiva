lixo, dia1 = input().split()
dia1 = int(dia1)
hora1, minuto1, segundo1 = map(int, input().split(' : '))
lixo, dia2 = input().split()
dia2 = int(dia2)
hora2, minuto2, segundo2 = map(int, input().split(' : '))

tempoTotal1 = segundo1 + minuto1 * 60 + hora1 * 3600 + dia1 * 24 * 3600
tempoTotal2 = segundo2 + minuto2 * 60 + hora2 * 3600 + dia2 * 24 * 3600

diferencaTempos = tempoTotal2 - tempoTotal1

diasFinal = diferencaTempos // (24 * 3600)
diferencaTempos %= 24 * 3600

horaFinal = diferencaTempos // 3600
diferencaTempos %= 3600

minutoFinal = diferencaTempos // 60
diferencaTempos %= 60

segundoFinal = diferencaTempos

print(f"{diasFinal} dia(s)")
print(f"{horaFinal} hora(s)")
print(f"{minutoFinal} minuto(s)")
print(f"{segundoFinal} segundo(s)")
