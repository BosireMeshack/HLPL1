#include <stdio.h>
#include<stdlib.h>
#include<ctype.h>


int is_palindrome(int *numbers, int length) {

    int reverse[length];
    int pos=0;
    for(int i=length; i>0; i--)
    {
        reverse[pos++] = numbers[i];
    }

    for(int k=0; k<length; k++)
    {
        if(!(reverse[k]==numbers[k]))
        {
            return 0;
        }
    }
    return 1;


}



int main() {

int length;
scanf("%d", &length);
int numbers[length];

for(int i=0; i<length; i++)
{
    scanf("%d", &numbers[i]);
}

printf("%s", is_palindrome(numbers, length) ? "True":"False");

return EXIT_SUCCESS;
}