#include <stdio.h>
int main()
{
    char name[30];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);  // read string
    puts("Name: ");
    puts(name);    // display string
    return 0;
}