n,m = map(int,input().split())
correct = list(map(int, input().split()))[:n]
wrong = list(map(int,input().split()))[:m]
mn = min(correct)
mx = max(correct)
mx = max(mx, 2*mn)
mn = min(wrong)
if mx<mn:
    print(mx)
else:
    print(-1)