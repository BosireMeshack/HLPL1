#include<stdio.h>
#include<stdlib.h>
int main (int argc, char *argv[])

{
    float sum=0;

    for(int i=1; i < argc; i++ )
    {
        // atof converts the string to a float
        sum = sum + atof(argv[i]);
    }
    
    //  printf("%.2f\n", sum); // outputs the sum

     //computes the average to 2 decimal places
    printf("%.2f\n", (sum/(argc-1)));


return EXIT_SUCCESS;
}   