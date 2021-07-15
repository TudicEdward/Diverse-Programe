import math

n=int(input("introduceti n: "))
a=[[0]*n for i in range(n+1)]
b=[[0]*n for i in range(n+1)]
i=1
a[0]=int(input("Introduceti primul termen al lui a: "))
b[0]=int(input("Introduceti primul termen al lui b: "))
while i<=n:
    a[i]=(a[i-1]+b[i-1])//2
    b[i]=math.sqrt(a[i-1]*b[i-1])
    i+=1
print(a[n])
print(b[n])
print(a)
input("pentru a inchide apasati enter")