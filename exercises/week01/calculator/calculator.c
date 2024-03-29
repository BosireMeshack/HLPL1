#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Read the number of test cases

    // Loop through each test case
    while (n--) {
        int x, y;
        char op;
        scanf("%d %c %d\n", &x, &op, &y); // Read operands and operator

        // Evaluate the expression based on the operator
        int result;
        switch (op) {
            case '+':
                result = x + y;
                break;
            case '-':
                result = x - y;
                break;
            case '*':
                result = x * y;
                break;
            case '/':
                if (y != 0) {
                    result = x / y;
                } else {
                    printf("Error: Division by zero\n");
                    continue; // Skip to the next test case
                }
                break;
            case '%':
                if (y != 0) {
                    result = x % y;
                } else {
                    printf("Error: Modulo by zero\n");
                    continue; // Skip to the next test case
                }
                break;
            default:
                printf("Error: Invalid operator\n");
                continue; // Skip to the next test case
        }

        // Print the result
        printf("%d %c %d = %d\n", x, op, y, result);
    }

    return 0;
}
