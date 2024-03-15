#include <stdio.h>

int main() {
    int num1 = 123;
    float num2 = 45.6789;
    char str[] = "Hello";

    // Aligning output using width specifiers
    printf("%-10s: %d\n", "Number", num1);
    printf("%-10s: %.2f\n", "Float", num2);
    printf("%-10s: %s\n", "String", str);

    return 0;
}