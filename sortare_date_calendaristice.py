date=[[1,10,2015],[1,5,2010],[2,6,2012],[15,1,1994],[1,1,1994],[15,4,1994]]
print("nesortat", date)
n=len(date)   
for i in range(n):
    for j in range(n-i-1):                        
        if date[j][2]>date[j+1][2]:                         ##Compara anii 
            date[j],date[j+1] = date[j+1],date[j]           ##Schimpa datele daca < al doilea an   
        elif date[j][2]==date[j+1][2]:                      ##Daca anii sunt identici
            if date[j][1]>date[j+1][1]:                     ##Compara luniile
                date[j],date[j+1] = date[j+1],date[j]       ##Schiimba luniile < a doua luna
            elif date[j][1]==date[j+1][1]:                  ##Daca luniile sunt identice
                if date[j][0]>date[j+1][0]:                 ##Compara dupa zi
                    date[j],date[j+1] = date[j+1],date[j]   ##Schimba zilele < a doua zi

print("sortat", date)
input("Apasati enter pentru a inchide programul")           ##Complexitatea algoritmului este de gradul Theta(n**2),
                                                            ##deoarece avem doua iteratii de tip for, care itereaza unul pe celalalt
