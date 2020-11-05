t = int(input())

for i in range(t):
    a,b,k = input().split()
    a = int(a)
    b = int(b)
    k = int(k)
    if k%2==0:
        print(int(a*(k/2)-b*(k/2)))
    else:
        print(int((k//2+1)*a-(b*(k//2))))