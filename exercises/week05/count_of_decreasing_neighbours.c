#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int count_of_decreasing_neighbours(int *numbers, int length) 
{
    int count=0;
    for(int k=1; k<length; k++)
    {
        if(numbers[k]<numbers[k-1])
        {
            count++;
        }
    }

    return count;

}


int main() {

    int length;

    while(1)
    {
        
        scanf("%d", &length);
        if(length==0)
        {
            break;
        }

       

        int numbers[length];

        for(int i=0; i<length;i++)
        {
            scanf("%d", &numbers[i]);
        }
        printf("%d", count_of_decreasing_neighbours(numbers, length));


    }
    




    return EXIT_SUCCESS;
}