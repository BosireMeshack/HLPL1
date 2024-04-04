#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>



int main ()
{

    int length, lines;

    lines=0;

    

    while(1)
    {
        scanf("%d", &length);
        if(length == 0)
        {   
            break;
        }
        
        else{
            int numbers[length];

        for(int i=0; i<length; i++)
        {
            scanf("%d", &numbers[i]);
        }
        int positives=0;
        int negatives=0;
        for(int j=0; j<length; j++)
        {
            if(numbers[j]>0)
            {
                positives++;
            }
            else if(numbers[j]<0)
            {
                negatives++;
            }
        }
        lines=lines+1;

    if(positives>negatives)
    {
        printf("%d\n", lines);
    }

    }
        
}

return EXIT_SUCCESS;
}