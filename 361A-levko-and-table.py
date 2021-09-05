n, k = input().split()
for i in range(0, int(n)):
    for j in range(0, int(n)):
        if i == j:
            print(int(k), end=" ")
        else:
            print(0, end=" ")
    print()
