#include <stdio.h>
#include <conio.h>

int nr(int n)
{
    if (n==0)
    {
    return 0;
    }
    else if(n%2==0)
    {
        return nr(n/10);
    }
    else 
    {
        return n%10 + 10*nr(n/10);
    }
}


int main()
{
int numar,c;

printf("Introduceti un numar: ");
scanf("%d", &numar);
printf("Numerele impare sunt: ");
c=nr(numar);
printf("%d", c);
getch();

}