#include<stdio.h>
#include<stdlib.h>

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
    while(scanf("%d", &length)!=EOF)
{
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