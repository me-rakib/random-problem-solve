s = input()
ln, rn = 0, 0
ind = s.index('^')
for i in range(0, ind):
    if s[i] != '=':
        ln += (ind-i) * (int(s[i]))
lng = len(s)
for i in range(ind+1, lng):
    if s[i] != '=':
        rn += (i-ind) * (int(s[i]))
if ln == rn:
    print('balance')
elif ln > rn:
    print('left')
else:
    print('right')