def print_element(lst):
    print(len(lst), end=" ")
    for i in lst:
        print(i, end=" ")
    print()

n = int(input())
arr = list(map(int, input().split()))[:n]
negative = []
positive = []
zero = []
temp = []
t = 0
for i in arr:
    if i< 0:
        if t > 0:
            temp.append(i)
        else:
            negative.append(i)
        t += 1
    elif i > 0: 
        positive.append(i)
    else:
        zero.append(i)
if len(temp) % 2 == 0:
    positive.extend(temp)
else:
    if len(temp) > 2:
        positive.append(temp.pop(0))
        positive.append(temp.pop(0))
    zero.extend(temp)
print_element(negative)
print_element(positive)
print_element(zero)