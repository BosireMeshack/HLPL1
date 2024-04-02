#include<stdio.h>
#include<stdlib.h>

int count_of_increasing_neighbours(int *numbers, int length) {
    int increasing_neighbour_count=0;

    for(int j=1; j<length; j++) {

        if(numbers[j]>= numbers[j-1])
        {
            increasing_neighbour_count++;
        }
    }
    return increasing_neighbour_count;
}

int main ()
{

    int test_cases, length;

    scanf("%d", &test_cases);

    for(int i = 0; i< test_cases; i++)
    {
        scanf("%d", &length);
        int numbers[length];
        for(int j=0;j<length;j++)
        {
            scanf("%d", &numbers[j]);
        }

        printf("%d\n", count_of_increasing_neighbours(numbers, length));
    }

return EXIT_SUCCESS;
}