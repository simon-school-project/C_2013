#include <stdio.h>
#include <math.h>
int info(int a)
{
	int i,temp=1;
	
	for(i=2;i<=sqrt(a);i++)
		if((a%i)==0)
			 temp=0;
	return temp;	
} 
int main(int argc, char *argv[])
{
	int a,temp;
	scanf("%d",&a);
	temp = info(a);
	if(temp==0)
	printf("%d不是素数",a);
	else
		printf("%d是素数",a);
	return 0;
}
