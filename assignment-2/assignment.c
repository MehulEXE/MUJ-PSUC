#include <stdio.h>

int main() {
    int a = 10, b = 5, c; // Initial values
    
    // Basic assignment
    c = a; 
    printf("Basic assignment (c = a): c = %d\n", c);

    // Add and assign
    c += b; // c = c + b
    printf("Add and assign (c += b): c = %d\n", c);

    // Subtract and assign
    c -= b; // c = c - b
    printf("Subtract and assign (c -= b): c = %d\n", c);

    // Multiply and assign
    c *= b; // c = c * b
    printf("Multiply and assign (c *= b): c = %d\n", c);

    // Divide and assign
    c /= b; // c = c / b
    printf("Divide and assign (c /= b): c = %d\n", c);

    // Modulus and assign
    c %= b; // c = c % b
    printf("Modulus and assign (c %%= b): c = %d\n", c);

    // Bitwise AND and assign
    c = a; // Reset c to a
    c &= b; // c = c & b
    printf("Bitwise AND and assign (c &= b): c = %d\n", c);

    // Bitwise OR and assign
    c |= b; // c = c | b
    printf("Bitwise OR and assign (c |= b): c = %d\n", c);

    // Bitwise XOR and assign
    c ^= b; // c = c ^ b
    printf("Bitwise XOR and assign (c ^= b): c = %d\n", c);

    // Left shift and assign
    c = a; // Reset c to a
    c <<= 2; // c = c << 2
    printf("Left shift and assign (c <<= 2): c = %d\n", c);

    // Right shift and assign
    c >>= 2; // c = c >> 2
    printf("Right shift and assign (c >>= 2): c = %d\n", c);

    return 0;
}
