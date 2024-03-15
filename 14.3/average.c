#include<stdio.h>
#include<stdlib.h>
int main ()
{

    int n;
    printf("How many numbers do you want to get average?\n");
    scanf("%d", &n);
    
    int sum;
    int i = 0;
    do 
    {
        int actual;
        
        printf("Enter the number\n" );
        scanf("%d", &actual);
        sum = sum + actual;
        i++;
        
    }while(i<n);
    double average = (double)sum/(double)n;
    printf("Average = %.2lf \n", average );


return EXIT_SUCCESS;
}