#include<stdio.h>

int main(){
    int a=4 ,b=7;
    printf("before swapping a=%d and b=%d \n",a ,b);
    a= a+ b;
    b=a -b;
    a= a- b;
    printf("after swapping a=%d and b=%d",a ,b);
    return 0;
}