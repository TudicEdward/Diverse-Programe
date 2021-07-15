#include<stdio.h>
#include<conio.h>

int main() 
{
	int i,numar,aux,rest,suma=0,fact;
	printf("Introduceti un numar: "); 
	scanf("%d",&numar);
	if(numar==0)
	{
		printf("\n %d Nu este un numar de tip Krishnamurthy ",numar);
		getch();
	}
	aux=numar; 
	while(numar>0)
	{
		rest=numar%10;
		fact=1;
		for(i=rest;i>=1;i--)
		{
			fact=fact*i;
		}
		suma=suma+fact;
		numar=numar/10;
	}
	if(suma==aux){
		printf("\n%d Este un numar de tip Krishnamurthy ",aux);
        getch();}
	else{
		printf("\n%d Nu este un numar de tip Krishnamurthy ",aux);
        getch();}
	return 0;
}