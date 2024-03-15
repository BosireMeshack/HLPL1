#include<stdio.h>
#include<stdlib.h>
int main ()
{
    const double rate = 35.293;
    double power_consumed;
    printf("How much power does your electrical appliances consume in Watts?\n");
    scanf("%lf",&power_consumed);
    double power_bill = (24.0*(power_consumed/1000.0))* rate;
    printf("Your annual power bill is %.2lf Ft\n", power_bill);


return EXIT_SUCCESS;
}