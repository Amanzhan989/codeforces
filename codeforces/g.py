n = int(input())
a = list(map(int,input().split()))
b = []
c = []
for i in range(n):
    if a[i]==0:
        b.append(n-a[i])
for i in range(n):
    if a[i]==0:
        c.append(b[i]-i-1)
    else:
        c.append(a[i])
print(*c)