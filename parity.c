#include<stdio.h>
#include<stdlib.h>

int has_matching_parity(int *numbers, int length){

    int count =0;
    for(int i=0;i<length;i++) {

        if(((i%2!=0&&numbers[i]%2!=0) || (i%2==0 && numbers[i]%2==0)))
        {
            count++;
        }
  
}
  if(count == length)
    {
        return 1;
    }
    else{
        return 0;
    }

}

int main()

{

    int length;
    scanf("%d", &length);
    while(length!=EOF)
    {
        int numbers[length];
        for(int j=0;j<length;j++) {
            scanf("%d", numbers[j]);

        }
        printf("%s",has_matching_parity(numbers, length)? "True":"False");
        
    }


    return EXIT_SUCCESS;
}