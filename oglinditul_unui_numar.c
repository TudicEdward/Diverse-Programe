#include <stdio.h>
#include <conio.h>

int intors(int numar)
{
    int nr_intors = 0, rest;

    while(numar != 0)
    {
        rest = numar%10;
        nr_intors = nr_intors*10 + rest;
        numar /= 10;
    }
    return nr_intors;
}




int oglindit(int x,int y)
{
if(intors(y)==x)
{
    return 1;
}
else
{
    return 0;
}

}


void verificare(int n)
{
    for(int i=1;i<=n;i++)
        {
        for(int j=n;j>=1;j--)
            {
            if(oglindit(i,j)==1 && n==i+j)
                {
                printf("\nNumerele sunt: %d si %d",i,j);
                } 
            } 
        }
}


int main()
{
int c;
printf("Introduceti un numar: ");
scanf("%d", &c);
verificare(c);
getch();
}