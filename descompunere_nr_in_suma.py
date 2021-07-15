n=int(input("Introduceti numarul:"))
def nrprime(numere):
    l=[]
    for num in range(2,numere):
               for i in range(2,num):
                   if (num % i) == 0:
                       break
               else:
                   l.append(num)
    for a in l:
        for b in l:
            if a+b==n and a<=b: 
                print(n,"=",a,"+",b)
nrprime(1000)

input("pentru a inchide apasati enter")