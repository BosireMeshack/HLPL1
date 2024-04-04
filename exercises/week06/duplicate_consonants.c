#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

char* duplicate_consonants(char* original)
{
    int len = strlen(original);
    char* result = (char*)calloc((len*2)+1,sizeof(char));
    int pos=0;
    for(int i=0; i<len; i++)
    {
        if(strchr('bcdfghjklmnpqrstvwxyz', toupper(original[i])))
        {
            result[pos++] = original[i];
        }
        result[pos++] = original[i];
    }
    result[pos++] = '\0';
    return result;

}


int main ()
{
    char line[101];
    
    
    while(1)
    {
        gets(line);
        if(strcmp(line,"")==0)
        {
            break;
        }

        char* result = duplicate_consonants(line);
        puts(result);
        free(result);
        
    }

return EXIT_SUCCESS;
}