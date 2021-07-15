import random as r

chars="abcdefghijklmnopqrstuvwxyz1234567890"
contor=1

while contor<=10:

    password=""
    n=r.choice(range(8,12))
    l=list(range(0,n))

    for i in l:

        password += r.choice(chars)

    contor += 1
    print("parola este: ", password)
input("pentru a inchide apasati enter")
