#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int n;
    scanf("%d", &n);
    int min;

    for(int i =0; i < n; i++)
    {
        int actual;
        scanf("%d", &actual);
        if(i==0 || actual < min){
            min = actual;
        }
    }
    printf("Minimum = %d", min);

return EXIT_SUCCESS;
}