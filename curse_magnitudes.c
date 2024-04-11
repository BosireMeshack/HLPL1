#include<stdio.h>
#include <stdlib.h>


int main (int argc, char *argv[] )
{

    int max = atoi(argv[1]); // retrieves integers from strings
    for(int i =2; i<argc;i++)
    {
        if(atoi(argv[i])>max)
        {
            max=atoi(argv[i]);
        }
    }

    printf("%d\n", max);

    return EXIT_SUCCESS;
}