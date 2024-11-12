#include <stdio.h>

int main(){
    int principal, rate , time;
    printf(" principal:");
    scanf("%d", & principal);
    printf(" rate:");
    scanf("%d", & rate);
    printf(" time:");
    scanf("%d", & time);
    printf("the simple intrest is =%d",(principal*rate*time)/100);
    return 0;
}