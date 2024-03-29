#include<stdio.h>
#include<stdlib.h>

int is_palindrome(int *numbers, int length)
{
    int is_valid = 1;
    for(int i=0; i<length/2;i++)
    {
        if(numbers[i] != numbers[length-1-i]){
            is_valid = 0;
        }
    }
    return is_valid;
}


int main ()
{
   
return EXIT_SUCCESS;
}