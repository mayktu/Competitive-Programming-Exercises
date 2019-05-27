#include<stdio.h>

int main ()
{
	int A;
	scanf("%d",&A);
	
	printf("%d:%d:%d\n",A/3600,A%3600/60,A%3600%60);
	
	return (0);
}
