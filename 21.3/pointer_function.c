#include <stdio.h>

#include <stdlib.h>

void pointer_function(int *ptr)
{
    //prints the value of the variable whose address is stored by this pointer
    // printf("%d\n", *ptr);

    // print the address stored in the pointer
    // printf("%p\n", ptr);

    // print the address of the pointer being passed
    printf("%p", &ptr);
}


int main ()
{

int age = 21;
int *n = &age;
pointer_function(n);


    return EXIT_SUCCESS;
}