n = int(input())
l = list(map(int, input().split()))
lSort = sorted(l)
prefixSum = [0] * (n + 1)
prefixSumSorted = [0] * (n + 1)
for i in range(1, n + 1):
    prefixSum[i] = prefixSum[i - 1] + l[i - 1]
    prefixSumSorted[i] = prefixSumSorted[i - 1] + lSort[i - 1]
q = int(input())    
for _ in range(q):
    t, l, r = map(int, input().split())
    if t == 1:
        print(prefixSum[r] - prefixSum[l - 1])
    else:
        print(prefixSumSorted[r] - prefixSumSorted[l - 1])