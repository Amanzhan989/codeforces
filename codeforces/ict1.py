n = int(input())
cnt = 0
k = n//100
while(n>0):
    if n >=100:
        n=n-k*100
        cnt+=k
    if n>=20 and n<100:
        n=n-20
        cnt+=1
    if n>=10 and n<20:
        n=n-10
        cnt+=1
    if n>=5 and n<10:
        n=n-5
        cnt+=1
    if n<5:
        cnt+=n
        print(cnt)
        exit()