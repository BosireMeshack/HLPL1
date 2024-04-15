#include<stdio.h>
#include<stdlib.h>

void relative_primes(int a, int b)
{
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else{
            b=b-a;
        }
    }

    if(a==1)
    {
        printf("Relative primes\n");
    }
    else
    {
        printf("Not relative primes\n");
    }
}


int main ()
{
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);

    relative_primes(a,b);


return EXIT_SUCCESS;
}