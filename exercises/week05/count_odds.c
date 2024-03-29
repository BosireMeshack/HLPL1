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

    int test_cases, length;
    puts("Enter the number of test cases\n");
    scanf("%d", &test_cases);
if(test_cases > 2 && test_cases < 11)
{
   for(int j=0; j<test_cases; j++)
   { 
    // puts("Enter the length of the array\n");
    scanf("%d", &length);

    int numbers[length];
    for(int k=0; k<length; k++)
    {
        // puts("Enter the element of the array");
        scanf("%d", &numbers[k]);
    }

    
    printf("%d\n", count_odds(numbers, length));
    }
    }
    else {
        puts("The number of test cases are out range!");
    }


return EXIT_SUCCESS;
}