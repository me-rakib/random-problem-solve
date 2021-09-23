n, a, b, c = map(int, input().split())
lst = [a, b, c]
res = 0
ln = len(lst)
for i in range(ln):
    if lst[i] == n:
        res += 1
    j = i+1
    while j < (ln):
        if lst[i] + lst[j] == n:
            res += 1
        j += 1
print(res)