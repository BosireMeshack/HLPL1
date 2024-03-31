#include<stdio.h>
#include<stdlib.h>


// function that determines whether the integers are odd or not
int count_odds(int *numbers, int length)
{
    int odd_count=0;

    for(int i=0; i<length; i++)
    {
        if(numbers[i]%2!=0)
        {
            odd_count++;
        }
    }
    return odd_count;
}


int main ()
{

    int length;
    
    // puts("Enter the length of the array\n");
    while(1)
{
    scanf("%d", &length);
    // special case that terminates the code
    if(length == 0)
    {
        break;
    }

    int numbers[length];
    for(int k=0; k<length; k++)
    {
        // puts("Enter the element of the array");
        scanf("%d", &numbers[k]);
    }

 
    printf("%d\n", count_odds(numbers, length));

    }
    
   


return EXIT_SUCCESS;
}