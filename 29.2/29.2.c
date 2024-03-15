#include <stdio.h>
#include <stdlib.h>

/*  Code for initilization
Format specifiers
int %d
char %c
float %f
double %lf

*/

int main(int argc, char const *argv[])
{
    /* code */
    printf("Enter side a: ");
    int a;
    int b;
    scanf("%d",  &a);
    printf("The value of a: %d \n", a);

    
    printf("Enter the value of b:");
    scanf("%d", &b);

    printf("The value of b: %d\n", b);

    printf("The area is: %d\n", a * b);

    double c, d;
    printf("Enter the new sides\n");
    scanf("%lf%lf", &c, &d);
    printf("The values of c and d are %lf %.2lf \n", c, d);

    printf("The area is: %.1lf\n", c * d);

    return EXIT_SUCCESS;
}
