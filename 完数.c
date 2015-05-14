#include<stdio.h>


int main()
{
    int n,i,s,count,sum;
    int a[500];
    scanf("%d",&s);
    /*被测试的每一个数*/
    for(n=2;n<=s;n++){
        count=0;
        sum=0;
        
        /*测试是否为因子*/    
        for(i=1;i<n;i++){
      
          /*fmod n/i 余数是0*/ 
            if(!(n%i)){
                   a[count++]=i;
                   sum=sum+i;
              }
        }
       
        if(n==sum){
            printf("%d its factors are ",n);
              
              for(i=0; i<count; i++)
                  printf("%d ",a[i]);
              printf("\n");
        }
    }
    
    return 0;
}
