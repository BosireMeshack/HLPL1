#include<stdio.h>
#include<stdlib.h>

int is_twisting(int *numbers, int length)
{
    for(int j=1; j<length; j++ )
    {
        if((numbers[j]>=0&&numbers[j-1]>=0)||(numbers[j]<=0&&numbers[j-1]<=0))
        {
            return 0;
        }
    }
    return 1;
}



int main()
{

    int length, n;

    scanf("%d", &n);
    for(int i=0; i<n;i++)
    {
        scanf("%d", &length);
        int numbers[length];
        for(int k=0; k<length; k++)
        {
            scanf("%d", &numbers[k]);
        }
        printf("%s", is_twisting(numbers,length)? "True\n":"False\n");
    }

    return EXIT_SUCCESS;
}