#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

char *delete_lowers(char *original) {
    //char result[strlen(original)+1];
    char *result = (char *) calloc(strlen(original)+1, sizeof(char)); // allocates memory

    int pos = 0;
    for(int i=0; i<strlen(original); i++)
    {
        if( ! islower(original[i]))
        {
            result[pos] = original[i];
            pos++;
        }
    }
}

int main ()
{
  
    char line[101];

    gets(line);
    int n = atoi(line);

    for(int i=0; i<n;i++)
    {
        gets(line);
        char *result = delete_lowers(line);
        puts(result);
        free(result); //deallocates the memory
    }

return EXIT_SUCCESS;
}