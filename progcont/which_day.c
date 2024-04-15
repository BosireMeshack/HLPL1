#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main ()
{   
    char date[6];
    gets(date);
    
    int month = (int)strcat(date[0],date[1]);
    int day = (int)strcat(date[3],date[4]);

    printf("%d", month);

return EXIT_SUCCESS;
}