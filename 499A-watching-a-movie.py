n, x = map(int, input().split())
t = 1
m = 0
for i in range(0, n):
    s1, s2 = map(int, input().split())
    t += x * ((s1-t)//x)
    m += s2-t+1
    t = s2 + 1
print(m)
