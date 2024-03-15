#include<stdio.h>
#include<stdlib.h>
int main ()
{

    char c;
    int opened = 0; // false
    while (scanf("%c", &c) != EOF) {
        if(c != '"') {
            printf("%c", c);
        } else{
            if (opened == 0) {
                    printf("``");
                    opened = 1; // true
            } else {
                printf("''");
                opened = 0;
            }
        }
        
    }
return EXIT_SUCCESS;
}