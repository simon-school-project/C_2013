#include <stdio.h>
int main(int argc, char *argv[])
{
	char ch;

	while((ch=getchar())!='\n') 
		{
		if((ch<='z'&&ch>='a')||(ch<='Z'&&ch>='A'))
		{
			ch=ch+4;
			if(ch>'Z'&&ch<='Z'+4||ch>'z') 
			{
				ch = ch-26;
			} 
		
		}
		putchar(ch);
		//	printf("%c",ch); 	
	}
	printf("\n");
	return 0;
}
