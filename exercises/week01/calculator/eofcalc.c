
 #include <stdio.h>
#include <stdlib.h>

int main() {
    int test_cases;

    printf("Enter the number of test cases: ");
    scanf("%d", &test_cases); // Read the number of test cases

    for (int counter = 0; counter < test_cases; counter++) {
        int x, y;
        char op;
        
        // printf("Enter the expression (operand operator operand): \n");
        scanf("%d %c %d", &x, &op, &y); // Read operands and operator

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
        printf( "%d\n", result);
    }

    return EXIT_SUCCESS;
}


