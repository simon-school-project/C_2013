#include <stdio.h>
int f(int x)
{
	if(x==0||x==1) return 3;
	return x*x-f(x-2);
}
int main(int argc, char *argv[])
{
	
	
	printf("%d",f(4));
	return 0;
}
