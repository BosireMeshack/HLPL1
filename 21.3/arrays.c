#include<stdio.h>
#include<stdlib.h>

void print_array(int *numbers,  int length)
{
    printf("%d\n", sizeof(numbers));
    printf("%d", numbers[0]);
    for(int i=1;i<length; i++)
    {
        printf(" %d", numbers[i]);
    }
}


int main ()
{
    int numbers[5];
    numbers[0] = 0;
    numbers[1] = 1;
    numbers[2] = 2;

    // for(int i=0; i<5; i++)
    // {
    //     printf("%d %p %d %p\n", numbers[i], &numbers[i], *(numbers+i), numbers+i);
    // }

    // printf("%p\n", numbers);

    // printf("%d %d\n", sizeof(numbers), sizeof(int));

    print_array(numbers, sizeof(numbers)/sizeof(int));

return EXIT_SUCCESS;
}