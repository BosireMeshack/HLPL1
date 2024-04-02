#include<stdio.h>
#include<stdlib.h>

int count_of_positives(int *numbers, int length) {

    int positives=0;

    for(int i=0; i<length; i++)
    {
        if(numbers[i]>0)
        {
            positives++;

        }
    }

    return positives;

}


int main()
{
    int length;

    while(1)
    {
        
        

        scanf("%d", &length);
        int numbers[length];
        if(length==0)
        {
            break;
        }
        else if(length > 2 && length < 11)
        {
            for(int j =0; j< length; j++)
            {
                scanf("%d", &numbers[j]);
            }
        }
    printf("%d \n", count_of_positives(numbers, length));
    }

    

    return EXIT_SUCCESS;
}