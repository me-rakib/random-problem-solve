n = int(input())
lst = []
for i in range(0, n):
    a = list(map(int, input().strip().split()))[:2]
    lst.append(a)
res = 0
for i in range(0, n):
    left,right,lower,upper = 0, 0, 0, 0
    for j in range(0, n):
        if i == j:
            continue
        else:
            if lst[j][0] > lst[i][0] and lst[j][1] == lst[i][1]:
                left += 1
            elif lst[j][0] < lst[i][0] and lst[j][1] == lst[i][1]:
                right += 1
            elif lst[j][0] == lst[i][0] and lst[j][1] < lst[i][1]:
                lower += 1 
            elif lst[j][0] == lst[i][0] and lst[j][1] > lst[i][1]:
                upper += 1
    if left >= 1 and right >= 1 and lower >= 1 and upper >= 1:
        res += 1
print(res)
                


