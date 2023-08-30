t = int(input())
for i in range(t):
    s = input()
    r = ""
    for j in range(len(s)):
        if s[j].isalpha():
            r += chr(ord(s[j]) + 3)
        else:
            r += s[j]
    r = r[::-1]
    final = ""
    metade = len(r) // 2
    for j in range(metade):
        final += r[j]
    for j in range(metade, len(r)):
        final += chr(ord(r[j]) - 1)
    print(final)