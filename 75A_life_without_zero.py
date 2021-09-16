def without_zero(n):
    num = ""
    for i in n:
        if i != '0':
            num = num + i
    return num


a = input()
b = input()
if int(without_zero(str(int(a) + int(b)))) == int(without_zero(a)) + int(without_zero(b)):
    print('YES')
else:
    print('NO')
