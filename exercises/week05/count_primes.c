#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<math.h>

bool is_prime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int count_primes(int *numbers, int length) {
    int count = 0;
    for (int i = 0; i < length; i++) {
        if (is_prime(numbers[i])) {
            count++;
        }
    }
    return count;
}


int main ()
{
    int test_cases, length;
    puts("Enter the number of test cases\n");
    scanf("%d", &test_cases);
    if(test_cases > 2 && test_cases < 11)
    {
    for(int j=0; j<test_cases; j++)
    { 
        // puts("Enter the length of the array\n");
        scanf("%d", &length);

        int numbers[length];
        for(int k=0; k<length; k++)
        {
            // puts("Enter the element of the array");
            scanf("%d", &numbers[k]);
        }

        
        printf("%d\n", count_primes(numbers, length));
        }
        }
        else {
            puts("The number of test cases are out range!");
        }

return EXIT_SUCCESS;
}