def reverse_string(s):
    return ''.join(reversed(s))

def print_pattern(c1, c2, num):
    for j in range(int(num)-int(c1)):
        print("O", end="")
    print("-", end='')
    for j in range(int(c2)-int(num)):
        print("O", end='')

digit = input()

for i in reverse_string(digit):
    if(i>='5' and i<='9'):
        print('-O|', end='')
        print_pattern('5', '9', i)
    else:
        print('O-|', end='')
        print_pattern('0', '4', i)
    print()