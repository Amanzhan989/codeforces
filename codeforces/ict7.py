n = int(input())
k = n
s1 = "I hate "
s2 = "I love "
if n==1:
    print("I hate it")
    exit()
if n==2:
    print(s1+"that"+" "+s2+"it")
    exit()
else:
    while(n>=1):
        if n==1 and k%2==0:
            print(s2+"it")
            exit()
        if n==1 and k%2!=0:
            print(s1+"it")
            exit()
        if n!=1:
            print(s1+"that",end=" ")
            n-=1
        if n!=1:
            print(s2+"that",end=" ")
            n-=1