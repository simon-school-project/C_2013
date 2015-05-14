#include <stdio.h>
int main(int argc, char *argv[])
{
	int i;
	for(i=1000;i<=1100 ; i++)
	{
		if((i%3==2)&&(i%5==4)&&(i%7==6))
		printf("%d",i);
	}
	return 0;
}
