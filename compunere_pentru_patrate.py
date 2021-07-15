n=int(input("introduceti numarul: "))
lista_patrate=[]

for i in range(1,n):
    if i**2>=n:
        break
    else:
        lista_patrate.append(i**2)
for a in lista_patrate:
    for b in lista_patrate:
        for c in lista_patrate:
            for d in lista_patrate:
                if n==a+b+c+d:
                    print(a,b,c,d)

input("pentru a inchide apasati enter")
