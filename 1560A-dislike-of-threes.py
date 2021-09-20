i = 0
arr = []
count = 1
while (i < 1003):
    if count % 3 != 0:
        if str(count)[-1] != "3":
            i += 1
            arr.append(count)
    count += 1
n = int(input())
for i in range(n):
    x = int(input())
    print(arr[x-1])