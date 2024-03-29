#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

char *double_lowers(char *original) {
    //char result[strlen(original)+1];
    char *result = (char *) calloc(strlen(original)*2 + 1, sizeof(char)); // allocates memory

    int pos = 0;
    for(int i=0; i<strlen(original); i++)
    {
        if( strchr("aeiou",tolower(original[i])))
        {
            result[pos] = original[i];
            pos++;
        }
    result[pos] = original[i];
    pos++;
    }
    return result;
}

int main ()
{
  
    char line[101];

    gets(line);
    

    while(1)
    {
        gets(line);
        if(strcmp(line, "")==0) // returns 0 if true
        {
            break;
        }

        char *result = double_lowers(line);
        puts(result);
        free(result); //deallocates the memory
    }

return EXIT_SUCCESS;
}