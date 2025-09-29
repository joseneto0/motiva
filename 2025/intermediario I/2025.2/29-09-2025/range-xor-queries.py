n, q = map(int, input().split())
l = list(map(int, input().split()))
prefix_xor = [0] * (n + 1)
for i in range(1, n + 1):
    prefix_xor[i] = prefix_xor[i - 1] ^ l[i - 1]
    
for _ in range(q):
    a, b = map(int, input().split())
    print(prefix_xor[b] ^ prefix_xor[a - 1])