n = int(input())
a = []
b = []
lst = []
for i in range(0, n):
    lst.append(input())
for i in lst:
    if i == lst[0]:
        a.append(i)
    else:
        b.append(i)
print(a[0] if len(a)>len(b) else b[0])