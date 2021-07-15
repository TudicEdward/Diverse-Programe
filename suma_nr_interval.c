#include <stdio.h>
#include <conio.h>

int suma(int start,int stop)
{
    int i,rez=0;
    for(i=start;i<=stop;i++)
    {
    rez=rez+i;
    }
return rez;
}





int main()
{
int m,n,rez;

printf("Introduceti limita minima: ");
scanf("%d", &m);
printf("Introduceti limita maxima: ");
scanf("%d", &n);

if(m>n)

{
    printf("Limita minima trebuie sa fie mai mica decat cea maxima!\n");
    main();
}

else

{
    rez=suma(m,n);
    printf("Rezultatul sumelor intre intervale este: %d", rez);
    getch();
}




}