#include<stdio.h>
#include<stdlib.h>

int *round_grades(int *original, int len)
{
    int *result = (int*) calloc(len+1, sizeof(int));
    int pos=0;
    for(int i=0; i<=len;i++)
    {
        if(original[i]<38)
        {
            result[pos++] = original[i];
        }
        else  {
        int remainder = original[i] % 5;
        
        // Check if the difference between the grade and the next multiple of 5 is less than 3
        switch (remainder) {
            case 3:
                result[pos++]= original[i] += 2;
                break;
            case 4:
                result[pos++]= original[i] += 1;
                break;
            default:
                result[pos++]=original[i];
                break;
            }
      }   
    }
    return result;
}


int main()

{
    int length;
    char line[10];

    scanf("%d", &length);
    int numbers[length];
    for(int i=0;i<=length; i++)
    {
        gets(line);
        numbers[i] = atoi(line);
    }

    int *result =  round_grades(numbers, length);

    for(int j=0; j<=length; j++)
    {
        printf("%d\n", result[j]);
    }


    return EXIT_SUCCESS;
}