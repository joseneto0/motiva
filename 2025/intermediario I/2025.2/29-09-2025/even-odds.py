n, k = map(int, input().split())
quantidade_impares = 0 # variavel auxiliar para guardar a quantidade de impares
if n % 2 == 0: 
    quantidade_impares = n // 2 
else: 
    quantidade_impares = (n + 1) // 2 

if k <= quantidade_impares: # esta na parte dos impares
    print(k * 2 - 1)
else: # esta na parte dos pares
    print((k - quantidade_impares) * 2)