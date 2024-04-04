#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
#include<ctype.h>

char* duplicating_uppers(char *original)
{
    int len = strlen(original);
    char* result = (char*)calloc((len*2)+1, sizeof(char));
    int pos=0;
    for(int j=0; j<len; j++)
    {
        if(isupper(original[j]))
        {
            result[pos++] = original[j];
        }
        result[pos++]=original[j];
    }
    result[pos++] = '\0';
    
    return result;
}


int main ()
{
    char line[100];
    while(gets(line))
    {
         if(strcmp(line,"")==0){
            break;
        }
        char *result = duplicating_uppers(line);
        puts(result);
        free(result);
        
    }

return EXIT_SUCCESS;
}