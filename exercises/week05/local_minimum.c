#include<stdio.h>
#include<stdlib.h>

int count_of_local_minimums(int *numbers, int length) {

    if(length<3)
    {
        return 0;
    }

    int count = 0;

    for(int i = 1; i < length - 1; i++)
        if( (numbers[i] < numbers[i + 1]) && (numbers[i] < numbers[i - 1]) )
            count++;

    return count;

   
}




    int main() {

    int cases, length;

    while(scanf("%d", &length)!=EOF)
    {
        
        int numbers[length];
        for(int j = 0; j < length; j++) {
            scanf("%d", &numbers[j]);
        }
    
        printf("%d\n", count_of_local_minimums(numbers, length));
    
    }

    

    return EXIT_SUCCESS;
}


