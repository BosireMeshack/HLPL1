#include<stdio.h>
#include<stdlib.h>

int gcd(int a, int b)
{
    while(a%b!=0)
    {
        int r = a%b;
        a = b;
        b = r;
    }
    return b;
}



int main ()
{
    int a,  b;
    scanf("%d", &a);

    scanf("%d", &b);

    if (b>a)
    {
        int temp = b;
        b = a;
        a = temp;

    }
    int result = gcd(a, b);
    printf("%d", result);

    
return EXIT_SUCCESS;
}

