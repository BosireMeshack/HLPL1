#include<stdio.h>
#include <stdlib.h>




int main (int argc, char *argv[] )

{ // char * argv

    printf("%d\n", argc);

    for(int i=0 ; i<=argc; i++)
    {
        printf("%d %p *%s*\n", i, argv[i], argv[i]);
    }
    char **actual = argv;
    while(*actual) // != NULL
    {
        puts(*actual);
        actual++;
    }

    return EXIT_SUCCESS;
}