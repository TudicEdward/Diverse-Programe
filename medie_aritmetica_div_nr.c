#include <stdlib.h>
#include <conio.h>




int main()
{
int numar;
float MA,suma=0,contor=0;
printf("Introduceti un numar: ");
scanf("%d", &numar);

for (int i=1;i<=numar;i++) 
    {
        if (numar%i==0)
        {
            suma+=i;
            contor+=1;
        }
    }
MA=suma/contor;
printf("Media aritmetica a divizorilor este %.2f", MA);
getch();

}