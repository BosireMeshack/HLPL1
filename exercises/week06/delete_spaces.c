#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>


char *delete_spaces(char *original) {

    int len = strlen(original);
    char *result = (char* )malloc((len+1) * sizeof(char));

    int j=0;
    for(int i=0; i<len;i++)
    {
        if(strcmp(original[i], ' ')==0)
        {
            result[j++] = '.';
            
        }
        else{
            result[j++] = original[i];
            
        }
    }
    result[j]='\0';
    return result;
}


int main()
{
    char line[100];
    while(gets(line)!=EOF)
    {
        printf("%s", delete_spaces(line));
    }

    return EXIT_SUCCESS;
}
