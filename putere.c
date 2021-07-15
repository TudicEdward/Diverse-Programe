#include <stdio.h>
#include <conio.h>

int putere(int baza, int exponent)
{
    int i, rez=1;
for(i=1;i<=exponent;i++)
{
rez=baza*baza;
}

return rez;
}



int main()
{
int x,n,rezultat;

printf("Introduceti baza: ");
scanf("%d", &x);
printf("Introduceti exponentul: ");
scanf("%d", &n);

if(x>0)

{
rezultat=putere(x,n);
printf("Rezultatul este %d", rezultat);
getch();
}

else
{
    printf("Baza nu are voie sa fie 0!\n");
    main();
}


}