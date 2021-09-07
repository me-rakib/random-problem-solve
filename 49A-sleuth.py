str = input().strip().replace(' ', '').replace('?', '').lower()
vowel = ['a', 'e', 'i', 'o', 'u', 'y']

if str[len(str)-1] in vowel:
    print('YES')
else:
    print('NO')

