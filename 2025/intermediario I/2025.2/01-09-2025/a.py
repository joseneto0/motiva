n, h , x = map(int, input().split())
valores = list(map(int, input().split()))
menor=[]
for i in range(n):
    if (valores[i] + h >= x):
        menor.append(i+1)
print(min(menor))