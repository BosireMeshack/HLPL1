#include<stdio.h>
#include<stdlib.h>
int main ()
{
    double height;
    double floor_height = 3;
    printf("Enter the height of the building in cm\n");
    scanf("%lf", &height);
    double number_of_floors = height/floor_height;
    printf("The height of each floor is %.0lf\n", number_of_floors);


return EXIT_SUCCESS;
}