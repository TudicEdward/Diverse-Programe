#include <stdio.h>
#include <conio.h>


int main()

{

char caracter;
scanf(" %c",&caracter);

while(caracter != 'Q')
{
    if(isupper(caracter)>0)
    {
        printf(" %c",caracter);
        scanf(" %c",&caracter);
    }
    else if(caracter>='0' && caracter<='9')
    {
        printf("Numar!");
        scanf(" %c",&caracter);
    }
    else
    {
        printf("");
        scanf(" %c",&caracter);
    }
    

}
}