#include <stdio.h>
#include <stdlib.h>

int is_twisting(int *numbers, int length) {
    for (int i = 1; i < length; i++) {
        if ((numbers[i] > 0 && numbers[i - 1] > 0) || (numbers[i] < 0 && numbers[i - 1] < 0) ||(numbers[i] == 0 && numbers[i - 1] == 0) ) {
            return 0;
    }
    }
    return 1;
}

int main() {
    int num_test_cases;
    scanf("%d", &num_test_cases); 
    getchar();

    for (int i = 0; i < num_test_cases; i++) {
        int length;
        scanf("%d", &length); 
        int *numbers = (int *)malloc(length * sizeof(int)); 
        for (int j = 0; j < length; j++) {
            scanf("%d", &numbers[j]);
        }

        printf("%s\n", is_twisting(numbers, length) ? "True" : "False");
        free(numbers);
    }

    return 0;
}
