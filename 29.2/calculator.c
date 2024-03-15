#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /* code */
    int a;
    int b;
    char op;
    printf("Enter the values of a, op and b:\n");
    scanf("%d %c %d", &a, &op, &b);
    printf("The values of a and b are: %d %c %d \n", a, op, b);

    switch (op) {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            printf("%d\n", a / b);
            break;
        default:
            printf("%d\n", a % b);
    }

    return EXIT_SUCCESS;
}
