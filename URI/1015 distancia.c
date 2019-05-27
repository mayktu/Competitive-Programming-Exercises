#include<stdio.h>
#include<math.h>

int main ()
{
	double x1,x2,y1,y2,a,b,dist;
	scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
	a=pow((x2-x1),2);
	b=pow((y2-y1),2);
	dist=sqrt(a+b);
	printf("%.4lf\n",dist);
	return (0);
}
	
	
