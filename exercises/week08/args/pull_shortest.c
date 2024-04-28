#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main (int argc, char *argv[])
{
    // intializes the first command-line argument to shortest
    char *shortest = argv[1];

    //compares to find the shortest string
    for(int i=1; i<argc; i++)
    {
     if(strlen(argv[i])<strlen(shortest)) {
        shortest = argv[i];
     }
    }

    // compares to print the strings that matches the length of the shortest strings 

    for(int j=1;j<argc;j++)
    {
        if(strlen(shortest)==strlen(argv[j]))
        {
            printf("%s\n", argv[j]);
        }
    }


return EXIT_SUCCESS;
}