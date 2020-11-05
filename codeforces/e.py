import math
n,k = input().split()
n = int(n)
k = int(k)
s = input()
a = input().split()
b = []  
cnt = 0  
for i in range(n):
    for j in range(k):
        if s[i]!=a[j]:
            b.append(math.factorial())
print(sum(b))