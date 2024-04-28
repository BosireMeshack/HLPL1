#include <stdio.h>

int main() {
    // Declare an array of pointers to integers
    int *ptrArray[5]; // Array of 5 pointers

    // Declare some integer variables
    int a = 10, b = 20, c = 30, d = 40, e = 50;

    // Assign addresses of integer variables to array elements
    ptrArray[0] = &a;
    ptrArray[1] = &b;
    ptrArray[2] = &c;
    ptrArray[3] = &d;
    ptrArray[4] = &e;

    // Access and print values using pointers
    for (int i = 0; i < 5; i++) {
        printf("Value at ptrArray[%d] = %d\n", i, *ptrArray[i]);
    }

    return 0;
}