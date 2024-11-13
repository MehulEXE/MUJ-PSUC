#include<stdio.h>

int main(){
    float fren;
    printf("temrature in Fahrenheit");
    scanf("%d", & fren);
    float cel =((fren -32)*0.556);
    printf("temprature in celsius is= %d",cel);
    return 0;
}