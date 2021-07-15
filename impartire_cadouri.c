#include <stdio.h>
#include <conio.h>

int main()
{
int F,B,N,i;
int numar_copii,numere_pare=0,numere_impare=0;
printf("Introduceti numarul de fete: ");
scanf("%d",&F);
printf("\nIntroduceti numarul de baieti: ");
scanf("%d", &B);
printf("\nIntroduceti numarul de cadouri: ");
scanf("%d", &N);
numar_copii=F+B;

for(i=0;i<N;i++)

{
    if(i%2==0)
    {
        numere_pare+=1;
    }
    else
    {
        numere_impare+=1;
    }
}

if(numere_pare>=F)

{
    printf("\nSunt suficiente cadouri pentru fete");
    getch();
}
else
{
    printf("Nu sunt suficiente cadouri pentru fete!");
    getch();
}

if(numere_impare>=B)

{
    printf("\nSunt suficiente cadouri pentru baieti!");
    getch();
}

else

{
    printf("Nu sunt suficiente cadouri pentru baieti!");
    getch();
}

}