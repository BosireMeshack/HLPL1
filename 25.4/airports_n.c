#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//for exam 
// structures contain attributes for a certain entity, i.e person, airport
typedef struct {
    char name[31];
    char city[31];
    int runways;
    int time;

} AIRPORT;


int cmp(const void *a, const void *b)
{
    AIRPORT *left = (AIRPORT *) a; 
    AIRPORT *right = (AIRPORT *) b;

// -- sorts the array elements of AIRPORT struct in desc order by no of runways

    if(left->runways != right->runways)
    {
        return -(left->runways - right->runways);
        //return right->runways - left->runways; // asc order
    }
    // -- sorts the array elements of AIRPORT struct in desc order by time
    if(left->time != right->time)
    {
        return -(left->time - right->time); 
        //return (left->time - right->time); // asc order
    }

    /*if(strcmp(left -> name, right->name) !=0)
    {
        return strcmp(left->name, right->name);//ASC ;
        return - strcmp(left->name, right->name);//DESC ;
    }*/

    return strcmp(left->name, right->name);

}


int main ()
{

    char line[101];
    int length = atoi(gets(line));
    AIRPORT airports[length];

    for(int i=0; i<length;i++)
    {
        gets(line);

        // -- strings --

        strcpy(airports[i].name,strtok(line, ";")); // read strings
        strcpy(airports[i].city, strtok(NULL, ";")); //strtok takes NULL as parameter for continuation

        // -- integers --

        airports[i].runways = atoi(strtok(NULL,";")); 
        airports[i].time = atoi(strtok(NULL, ";"));
    }

    // -- qsort -- 

    qsort(airports, length, sizeof(AIRPORT), cmp);


    //print
    for(int j=0;j<length; j++)
    {
        printf("%s (%s):  %d\n", airports[j].name, airports[j].city, airports[j].time);
    }


return EXIT_SUCCESS;
}