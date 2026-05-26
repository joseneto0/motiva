while True:
    n = int(input())
    if n == 0:
        break
    dicio = {}
    for i in range(n):
        time, valor = input().split()
        valor = int(valor)
        dicio[time] = valor
    
    for i in range(n // 2):
        time1, placar, time2 = input().split()
        gols_time1, gols_time2 = placar.split('-')
        gols_time1, gols_time2 = int(gols_time1), int(gols_time2)
        dicio[time1] += (gols_time1 * 3)
        dicio[time2] += (gols_time2 * 3)
        if gols_time1 > gols_time2:
            dicio[time1] += 5
        elif gols_time2 > gols_time1:
            dicio[time2] += 5
        else:
            dicio[time1] += 1
            dicio[time2] += 2
    
    maior = 0
    time_vencedor = ''
    for time, pontos in dicio.items():
        if pontos > maior:
            maior = pontos
            time_vencedor = time
    
    if time_vencedor == 'Sport':
        print(f"O Sport foi o campeao com {maior} pontos :D")
    else:
        print(f"O Sport nao foi o campeao. O time campeao foi o {time_vencedor} com {maior} pontos :(")
