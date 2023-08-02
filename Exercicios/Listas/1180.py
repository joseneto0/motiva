n = int(input())
valores = list(map(int, input().split()))
print(f"Menor valor: {min(valores)}")
print(f"Posicao: {valores.index(min(valores))}")