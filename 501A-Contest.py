def res(p, t): 
    return max((3*p)/10, p-(p/250)*t)

a, b, c, d = [int(x) for x in input().split()]
r1 = res(a,c)
r2 = res(b,d)

if r1 == r2:
    print('Tie')
elif r1 > r2:
    print('Misha')
else:
    print('Vasya')