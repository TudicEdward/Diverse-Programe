#include <stdio.h>
#include <conio.h>

int perfect(n)
{
    int suma=0;
    for (int i=1;i<=n/2;i++) 
    {
        if (n%i==0)
        {
            suma+=i;
        }
    }
    if(suma==n)
        {
        return 1;
        }
    else
        {
        return 0;
        }
}


int main()
{

int min,max,contor=0;

printf("Introduceti minimul intervalului: ");
scanf("%d", &min);
printf("Introduceti maximul intervalului: ");
scanf("%d", &max);

for(int i=min;i<=max;i++)
{
    if(perfect(i)==1)
    {
        contor+=1;
    }
}
printf("Numarul de numere perfecte din interval este: %d", contor);
getch();

}