#include <stdio.h>
int main(int argc, char *argv[])
{
	int a,b,i;
	for(i=1000;i<=9999;i++){
		a=i/100;
		b=i%100;
		if((a+b)*(a+b)==i)
			printf("%d\n",i);
	} 
	return 0;
}
