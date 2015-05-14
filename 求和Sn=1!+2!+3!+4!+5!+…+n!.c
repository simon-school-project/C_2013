#include <stdio.h>
int main(int argc, char *argv[])
{
	int n,i,s=1,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s*=i;
		sum+=s;
	}
	printf("%d",sum);
	return 0;
}
