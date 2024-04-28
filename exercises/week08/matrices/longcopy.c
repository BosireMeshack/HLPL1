#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main (int argc, char *argv[])

{
    // # of rows of the 2D arrays
    int rows = (int) argv[1]; 

    // # of cols of the 2D arrays
    int cols = (int) argv[2];


    // Declare a pointer to char to hold the string
    char *str = NULL;
    int length = 0; // Length of the string
    char ch;
    int max=0;
    


    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            while ((ch = getchar()) != '\n') {
            // Reallocate memory for the string to accommodate the new character
            str = (char *)realloc(str, (length + 1) * sizeof(char));
            // if (str == NULL) {
            //     printf("Memory allocation failed\n");
            //     return 1;
            // }
            // Append the new character to the string
            str[length++] = ch;


    }
    // Null-terminate the string
    str = (char *)realloc(str, (length + 1) * sizeof(char));
    // if (str == NULL) {
    //     printf("Memory allocation failed\n");
    //     return 1;
    // }
    str[length] = '\0';



        }
    }



    printf("%d\n", sizeof(char*)); // prints the size of a string in C




    return EXIT_SUCCESS;
}