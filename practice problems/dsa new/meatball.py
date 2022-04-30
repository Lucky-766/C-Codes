N=int(input("enter the number of people involved in hiring process:"))
m=0
maxpos=0
v=[0]*N
D=int(input("enter the grams of meatball is being sold to every packet:"))
for i in range(N):
    v[i]=int(input())
for i in range(N):
    v[i]=(v[i]-1)//D

for i in range:
    if v[i]>=m:
        m=v[i]
        maxpos=i
print(maxpos+1)