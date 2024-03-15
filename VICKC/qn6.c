#include<stdio.h>
#include<stdlib.h>
int main ()
{
    //define the fule unit price as a constant
    const int fuel_price = 620;

    //declare the distance travelled and amount of fuel consumed per 100km

    double distance;
    int passenger_count;
    double fuel_consumption_rate;

    printf("What distance do you wish to travel?\n");
    scanf("%lf", &distance);

    printf("How much litres of fuel does your vehicle consume per 100 km?\n");
    scanf("%lf", &fuel_consumption_rate);

    printf("How many passengers are in the vehicle?\n");
    scanf("%d", &passenger_count);

    // calculate total fuel cost
    double fuel_cost = ((distance /100)* fuel_consumption_rate)* fuel_price;

    // cost for each passenger

    double transportation_fee = fuel_cost / passenger_count;

    printf("Each passenger will pay? %.2lf\n", transportation_fee);

return EXIT_SUCCESS;
}