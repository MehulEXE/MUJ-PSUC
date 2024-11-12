#include <stdio.h>

int main() {
    int r;
    float pi = 3.14;
    printf("Radius = ");
    scanf("%d", &r);
    printf("Circumference of the circle is = %.2f\n", 2 * pi * r);
    printf("Area of the circle is = %.2f\n", pi * r * r);
    return 0;
}
