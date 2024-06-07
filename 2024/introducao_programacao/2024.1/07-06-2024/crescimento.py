t = int(input())
m = int(input())
a = int(input())  
ans = 0
while (t < a):
    aux = t
    t *= m
    t += aux
    ans += 1
print(ans)