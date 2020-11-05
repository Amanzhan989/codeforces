n = int(input())
a = list(map(int,input().split()))
a.sort()
cnt = 0
for i in range(0,n,2):
    cnt+=a[i+1]-a[i]
print(cnt)