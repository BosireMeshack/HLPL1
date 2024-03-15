#include<stdio.h>
#include<stdlib.h>
int main ()
{

    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d\n", i);
    }
return EXIT_SUCCESS;
}