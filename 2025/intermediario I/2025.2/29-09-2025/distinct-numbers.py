n = int(input())
l = map(int, input().split())
distinct = {1}
um = False
for i in l:
    if i == 1:
        um = True
        continue
    distinct.add(i)

if not um:
    distinct.remove(1)
print(len(distinct))