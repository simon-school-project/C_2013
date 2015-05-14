#include <stdio.h>
int f(int m, int n)
{
    if(m==0) return 1;
    if(n==0 || n==m) return 1;
    return f(m-1,n-1)+f(m-1,n);
}
int main(int argc, char *argv[])
{
    int m, n;
    while (scanf("%d%d", &m, &n)!=EOF) {
        printf("%d\n", f(m,n));
    }
    return 0;
}
