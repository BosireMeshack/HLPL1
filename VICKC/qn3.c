#include<stdio.h>
#include<stdlib.h>
int main ()
{

    int neg = -1523;
    float dec = 0.28;
    double db = 3.14159265359;
    char ch = 'X';

    printf("%-10s %d\n","-1523",neg);
    printf("%.1f\n", dec);
    printf("%-5s: %.2lf\n","pi", db);

return EXIT_SUCCESS;
}