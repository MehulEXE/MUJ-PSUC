#include <stdio.h>
int main() {
    int a, b, val;
    printf("Enter your values: ");
    scanf("%d %d", &a, &b);

    printf("operations\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Type the number to select the operation:");
    scanf("%d", &val);

    if (val == 1) {
        printf("Sum is %d\n", a + b);
    } else if (val == 2) {
        printf("Difference is %d\n", a - b);
    } else if (val == 3) {
        printf("Multiplied result is %d\n", a * b);
    } else if (val == 4) {
        if (b == 0) {
            printf("Error: Division by zero is not allowed.\n");
        } else {
            printf("Division result is %.2f\n", (float)a / b);
        }
    } else {
        printf("Not a valid option.\n");
    }

    return 0;
}
