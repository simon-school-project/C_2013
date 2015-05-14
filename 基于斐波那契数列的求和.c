#include<stdio.h>
int main(){
    int a,b,c,n,i;
 double s;
 scanf("%d",&n);
 a=2,b=1,s=0;
 for (i=1;i<=n;i ++)
 {s+=(1.0*a/b);  //防止整数运算结果为整数
 c=b;
 b=a;
 a=a+c;
 }
    printf("%.2f",s);
 return 0;
 
}
