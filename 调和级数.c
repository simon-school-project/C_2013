#include <stdio.h>
int main(int argc, char *argv[])
{
	int i,n;
	double sum = 1.0;
	scanf("%d",&n);
	for(i=2;i<=n ;i++ )
	{
		
		sum += 1.0/i;
	}
	printf("%.3f",sum);
	return 0;
}
