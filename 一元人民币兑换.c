#include <stdio.h>
int main(int argc, char *argv[])
{
	int a,b,c,count=0;
	for(a=0;a<=100;a++) 
		for(b=0;b<=50;b++)
			for(c=0;c<=20;c++)
				if(a+2*b+5*c== 100)
					count++;
					
		printf("%d\n",count);
	return 0;
}
