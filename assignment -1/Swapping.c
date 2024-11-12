#include<stdio.h>
int main(){
    int a =1 ,b=5,c;
    printf("initial value of a and b are %d and %d \n", a ,b);
    c=a;
    a=b;
    b=c;
    printf("after swapping value of a abd b are %d and %d \n", a,b);
    return 0;
}