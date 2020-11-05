t = int(input())
s1 = "abcdefghijklmnopqrstuvwxyz"
s = ""
for i in range(t):
    n,k = input().split()
    n = int(n)
    k = int(k)
    d = 0
    for j in range(n):
        if d==k:
            d = 0
        s+=s1[d]
        d+=1
    print(s)
    s=""