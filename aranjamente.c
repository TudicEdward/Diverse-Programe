#include <stdio.h>
#include <conio.h>

int m,n,rezultat;

int factorial(int x)
{
int i, fact=1;
for(i=1;i<=x;i++){
    fact=fact*i;}
return fact;
}

int aranjamente(int z, int y)
{

int aranjament,scadere;
scadere=z-y;
rezultat=factorial(z)/factorial(scadere);

return rezultat;

}


int main()
{
    printf("Introduceti valoare lui m: ");
    scanf("%d", &m);
    printf("Introduceti valoarea lui n: ");
    scanf("%d", &n);

if(m<=n && m>=1 && n>=1)

{
rezultat=aranjamente(n,m);
printf("Rezultatul este: %d", rezultat);
getch();
}

else

{
    printf("Valorile nu sunt bune\n");
    main();
}
}


