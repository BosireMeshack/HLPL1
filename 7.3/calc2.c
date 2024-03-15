#include<stdio.h>
#include<stdlib.h>
int main ()
{

    //infinite loop
        while(1)
    {
            int a, b;
            char op;
            if (scanf("%d %c%d\n", &a, &op, &b) == EOF)
            
            {
                break;
            };
    };

    // int n;
    // scanf("%d", &n);
   // printf("%d\n",n);

    // The user will have the chance to do calculation n times
    // for(int i = 0; i < n; i++)
    // {
    //     int a;
    //     int b;
    //     char op;
    //     scanf("%d %c%d\n", &a, &op, &b);
    //     //printf("%d %c%d\n", a, op, b);


    // }

return EXIT_SUCCESS;
}