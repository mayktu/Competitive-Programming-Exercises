#include<stdio.h>

int main ()
{
	int hora,vel;
	double lit;
	scanf("%d %d",&hora,&vel);
	lit=(1.0*hora*vel)/12;
	printf("%.3lf\n",lit);
	return (0);
}

