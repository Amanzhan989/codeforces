n = int(input())
summ = 0
for i in range(n):
    s = input()
    if s[0]=="T":
        summ+=4
    if s[0]=="C":
        summ+=6
    if s[0]=="O":
        summ+=8
    if s[0]=="D":
        summ+=12
    if s[0]=="I":
        summ+=20
print(summ)