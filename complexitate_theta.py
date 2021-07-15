x=[4,5,10,2,34,8]
print(x)
#Complexitate Theta(n**2)

m=[]

for i in range(len(x)):  # Aici se itereaza pentru prima data pe lista.
    sum=0
    for j in range(i+1): # Aici se itereaza pentru a doua oara pe lista.
        sum+=x[j]
    m.append(sum/(i+1))  # Deoarece avem 2 iteratii de tip FOR, complexitatea creste.
                         # Fiecare FOR mareste complexitatea de "n" ori, deci rezulta ca aici avem o compexitatea patratica
print(m)

#Complexitate Theta(n)

m=[x[0]/1]
for i in range(1,len(x)): # FOR este folosit o singura data in acest caz.
    x[i]+=x[i-1]          # Deoarece FOR este folosit doar o data, complexitatea este de aceeasi dimensiune cu cea a problemei
    m.append(x[i]/(i+1))

print(m)

input("Apasati enter pentru a inchide programul")