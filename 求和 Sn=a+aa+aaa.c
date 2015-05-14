#include <stdio.h>
int main(int argc, char *argv[])
{
	int i,a=2,n,sum=0,t;
	scanf("%d",&n); 
	for(i=1;i<=n;i++)
	{	sum +=a;
		a=a*10+2;
	
	}
	printf("%d",sum);
	return 0;
}
