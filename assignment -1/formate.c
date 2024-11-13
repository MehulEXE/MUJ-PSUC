#include <stdio.h>

int main() {
    int integer = 42;
    char character = 'A';
    float floatingPoint = 3.14159;
    double doublePrecision = 123456.789;
    unsigned int unsignedInteger = 3000000000U;
    long long longInteger = 9876543210LL;          // Use long long with LL suffix
    const char *string = "Hello, World!";          // Add const to avoid warning
    void *pointer = &integer;

    // Integer formats
    printf("%%d : %d\n", integer);                   // %d - Signed integer
    printf("%%c : %c\n", character);                 // %c - Character
    printf("%%i : %i\n", integer);                   // %i - Signed integer (same as %d)
    printf("%%u : %u\n", unsignedInteger);           // %u - Unsigned integer
    printf("%%o : %o\n", unsignedInteger);           // %o - Unsigned octal
    printf("%%x : %x\n", unsignedInteger);           // %x - Unsigned hexadecimal (lowercase)
    printf("%%X : %X\n", unsignedInteger);           // %X - Unsigned hexadecimal (uppercase)
    printf("%%ld : %ld\n", longInteger);             // %ld - Long integer

    // Floating-point formats
    printf("%%f : %f\n", floatingPoint);             // %f - Floating point (decimal notation)
    printf("%%g : %g\n", floatingPoint);             // %g - Uses %f or %e, whichever is shorter
    printf("%%e : %e\n", doublePrecision);           // %e - Floating point (scientific notation, lowercase)
    printf("%%E : %E\n", doublePrecision);           // %E - Floating point (scientific notation, uppercase)

    // String and pointer formats
    printf("%%s : %s\n", string);                    // %s - String
    printf("%%p : %p\n", pointer);                   // %p - Pointer

    return 0;
}
