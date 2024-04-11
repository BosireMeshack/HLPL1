#include <stdio.h>
#include <stdlib.h>
int  count_of_decreasing_neighbours(int *arr, int len){
    int count=0;
    if(len < 3){
        return 0;
    }
    for(int i=0; i < len -1; i++){
        if(arr[i]<= arr[i+1]){
            count++;
        }
        else{
            return 0;
        }
    }
    if(arr[len -1]<= arr[len-2]){
        count++;
    }

    return count;
}
int main(){
    int len;
    int line_num = 0;
    while(line_num<10){
        scanf("%d", &len);
        int num[len];
        for(int i =0; i<len; i++){
            scanf("%d", &num[i]);
        }
        int count = count_of_decreasing_neighbours(num, len);
        printf("%d", count);
        line_num++;
    }


    return EXIT_SUCCESS;
}