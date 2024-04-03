n = int(input())
a = list(map(int, input().split()))
i = 0
j = n-1
cont = 0
while (i < j):
    if (a[i] > a[j]):
        a[j-1] += a[j]
        j -= 1
        cont += 1
    elif (a[i] < a[j]):
        a[i+1] += a[i]
        i += 1
        cont += 1
    else:
        i += 1
        j -= 1
print(cont)
