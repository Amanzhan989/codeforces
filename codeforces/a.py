t = int(input())
for i in range(t):
    n = int(input())
    a = list(map(int,input().split()))
    cnt = 0
    for i in range(n):
        if a[i]==0:
            a[i]+=1
            cnt+=1 
    if(sum(a)!=0):
        print(cnt)
    else:
        print(cnt+1)
    a.clear()