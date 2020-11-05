n,m,a = input().split()
n = int(n)
m = int(m)
a = int(a)
answer1 = 0
answer2 = 0
if(n%a==0):
    answer1 = n/a
if(m%a==0):
    answer2 = m/a
if(n%a!=0):
    answer1 = n//a+1
if(m%a!=0):
    answer2 = m//a+1
print(answer1+answer2)