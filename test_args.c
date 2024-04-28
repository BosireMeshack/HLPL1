#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(int argc, char *argv[]) {

     printf("argc %d \n", argc );

     for(int i=0; i< argc; i++)
     {
        printf("%p, %s \n", &argv[i], argv[i] );
     }
     

     puts("====");

     char **actual = argv;
     while(*actual) {
        puts(*actual);
        actual++;

     }


    return EXIT_SUCCESS;
}