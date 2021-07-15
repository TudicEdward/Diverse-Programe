#include <stdio.h>
#include <conio.h>

int factorial(int x)
{
int i, fact=1;

for(i=1;i<=x;i++){
    fact=fact*i;}
return fact;
}



int main()
{

int m,n,rezultat;

printf("Introduceti valoare lui m: ");
scanf("%d", &m);
printf("Introduceti valoare lui n: ");
scanf("%d", &n);

if(m<=n)
{
rezultat=factorial(n)/((factorial(m))*factorial(n-m));
printf("Rezultatul este %d", rezultat);
getch();
}
else
{
    printf("m trebuie sa fie mai mic ca si n\n");
    main();
}
}