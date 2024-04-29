#include <stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct {

    char name[31];
    char world[31];
    int height;
    int time;
}
ROLLER_COASTER;


int cmp( const void *a, const void *b)  {

    ROLLER_COASTER *left = (ROLLER_COASTER *)a;
    ROLLER_COASTER *right = (ROLLER_COASTER *)b;

    if(left->time != right->time)
    {
        return ((left->time) - (right->time));
    }

    if(left->height != right->height)
    {
        return -((left->height) - (right->height));
    }

    return strcmp(left->name, right->name);
}

int main()
{

    char line[101];
    ROLLER_COASTER roller_coasters[20];
    int length = 0;

    while(gets(line))
    {
        strcpy(roller_coasters[length].name, strtok(line,";"));
        strcpy(roller_coasters[length].world, strtok(NULL,";"));
        roller_coasters[length].height = atoi(strtok(NULL, ";"));
        roller_coasters[length].time = atoi(strtok(NULL,";"));
        

        length++;
}
    qsort(roller_coasters, length, sizeof(ROLLER_COASTER), cmp);

    for(int i=0; i<length; i++)
    {
        printf("%s (%s): %d\n", roller_coasters[i].name, roller_coasters[i].world, roller_coasters[i].time);
    }



    return EXIT_SUCCESS;
}