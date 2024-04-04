#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>


char *delete_spaces(char *original) {

    int len = strlen(original);
    char *result = (char* )calloc((len+1),sizeof(char));

    int j=0;
    int i;
    for( i=0; i<len;i++)
    {
        if(original[i]!=' ')
        {
            result[j++] = original[i];
        }
        }
    result[j]='\0';
    return result;
}

int main()
{
    char line[101];
    while(gets(line))
    {
        char *space_free = delete_spaces(line);
        printf("%s\n", space_free );
        free(space_free);
    }

    return EXIT_SUCCESS;
}
