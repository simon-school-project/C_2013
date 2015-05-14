#include <stdio.h>
int main(int argc, char *argv[])
{
	int i,s,a,b,c;
	int sum = 0;
	 for(i=100;i<999 ;i++ )
	 {
	 	sum = i*i;
	 	a=sum%1000/100;
	 	b=sum%100/10;
	 	c=sum%10;
	 	if(i==a*100+b*10+c)
	 		printf("%d\n",i);
	 }
	
	return 0;
}
