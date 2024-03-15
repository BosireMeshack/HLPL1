#include<stdio.h>
#include<stdlib.h>
int main ()
{

    char c;
    char opened = 0; // false
    // Char can represent two integers
    while ((c = getchar()) != EOF) {
        if(c != '"') {
            putchar(c);
        } else{
            printf(opened? " '' " : "``");
            opened = !opened;
        }
        
    }
return EXIT_SUCCESS;
}

// gcc lm if I use math.h