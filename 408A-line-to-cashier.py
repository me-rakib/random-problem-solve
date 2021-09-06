n = int(input())
ppl = list(map(int, input().strip().split()))[:n]
time = []
for i in range(0, n):
    temp = 15 * ppl[i]
    product = list(map(int, input().strip().split()))[:ppl[i]]
    for j in range(0, ppl[i]):
        temp += product[j]*5
    time.append(temp)
time.sort()
print(time[0])