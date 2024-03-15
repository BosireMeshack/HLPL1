#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int n=0;
    int sum = 0;
    int actual;
    while(scanf("%d", &actual)!= EOF) {
        
        scanf("%d", &actual);
        sum+=actual;
        n++;
    }
    printf("Average = %.2lf  ", (sum/(double)n));
return EXIT_SUCCESS;
}