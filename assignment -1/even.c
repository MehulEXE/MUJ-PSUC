#include<stdio.h>

int main(){
    int a;
    printf("enter a no.: ");
    scanf("%d", & a);
    if(a % 2==0)
    printf("Number %d is an even number.\n", a);
    else
    printf("Number %d is an odd number.\n", a);
return 0;
}