#include <stdio.h>
int main(int argc, char *argv[])
{
	int x,y,z,count=0;
	 for(x=1;x<30 ;x++ )
	 	for(y=1;y<30;y++)
	 		for(z=1;z<30;z++)
	 		{
			 	if((x+y+z==30)&&(3*x+2*y+z==50))
			 	count++;
			 }
	 printf("%d",count);	
	return 0;
}
