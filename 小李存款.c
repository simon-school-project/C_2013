#include <stdio.h>
int main(int argc, char *argv[])
{
    double money = 1000;
    int n = 5;
    int i;
    for(i=0; i<n; i++) {
        money = money+money*0.03;
        money -= 100;
    }
    printf("%.2f\n", money);
    return 0;
}
