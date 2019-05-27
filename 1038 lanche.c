#include<stdio.h>

int main ()
{
	int cod;
	float qtd;
	scanf("%d %f",&cod,&qtd);
	
	switch (cod)
		{
			case 1: printf("Total: R$ %.2f\n",1.0*4*qtd);
			break;
			case 2: printf("Total: R$ %.2f\n",4.5*qtd);
			break;
			case 3: printf("Total: R$ %.2f\n",1.0*5*qtd);
			break;
			case 4: printf("Total: R$ %.2f\n",1.0*2*qtd);
			break;
			case 5: printf("Total: R$ %.2f\n",1.5*qtd);
			break;	
		}
	return (0);
}
	
	
