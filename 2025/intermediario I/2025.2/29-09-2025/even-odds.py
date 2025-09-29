n, k = map(int, input().split())
aux = 0 # variavel auxiliar para guardar a quantidade de impares
if n % 2 == 0: 
    aux = n // 2 
else: 
    aux = (n + 1) // 2 
    
if k <= aux: # esta na parte dos impares
    print(k * 2 - 1)
else: # esta na parte dos pares
    print((k - aux) * 2)