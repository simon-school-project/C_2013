#include <stdio.h>
int main(int argc, char *argv[])
{
	double x,y;
	scanf("%lf",&x);
	if(x<0)
	{
    y=0;
	}
	if(x>=0&&x<5)
	{
	y=x+2;
	}
	if(x>=5&&x<10)
	{
	y=x*x-3;
	}
	if(x>=10)
	{
	y=10;
	}
	printf("%.3lf",y);
	return 0;
}