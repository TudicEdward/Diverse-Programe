#include <stdio.h>
#include <conio.h>

int prime(int numar)
{
    int i;
    for(i=2;i<=numar/2;i++)
    {
        if(numar%i==0)
        return 0;
    }
    return 1;

}


int main()
{

int m,n,j,rez;    
printf("Introduceti limita minima: ");
scanf("%d", &m);
printf("Introduceti limita maxima: ");
scanf("%d", &n);

if(m<n)
{
    
    for(j=m;j<=n;j++)
    {
        rez=prime(j);
        if(rez==1){
        printf("%d", j);
        printf("\n");
        }
    }
    getch();
}

else
{
    printf("Intervalul nu este valid!\n");
    main();
}
}