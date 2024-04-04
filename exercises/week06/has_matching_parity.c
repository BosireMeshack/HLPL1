#include<stdio.h>
#include<stdlib.h>

int has_matching_parity(int *numbers, int length)
{
    int count=0;
    for(int i=0; i<length;i++)
    {
        if(i==numbers[i])
        {
            count++;
        }
    }

    if(count==length)
    {
        return 1;
    }
    else{
        return 0;
    }
}

int main ()
{
    int test_cases;
    int length;
    scanf("%d", &test_cases);
    for(int j=0; j<test_cases;j++)
    {
        scanf("%d", &length);
        int numbers[length];
        for(int k=0; k< length; k++)
        {
            scanf("%d", &numbers[k]);
        }
        int x = has_matching_parity(numbers, length);
        printf("%s", x?"True\n":"False\n");

    }
    
   
return EXIT_SUCCESS;
}