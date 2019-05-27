#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int a,b,c,maior;
	scanf("%d %d %d",&a,&b,&c);
	maior=(a+b+ abs(a-b))/2;
	printf("%d eh o maior",maior);
	return (0);
	
}
