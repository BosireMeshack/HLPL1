#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int is_consonant(char c) {
    c = tolower(c);
    return !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

char *delete_consonants(const char *str) {
    int len = strlen(str);
    char *result = (char *)malloc((len + 1) * sizeof(char));  // Allocate memory for the result
    if (result == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }

    int j = 0;
    for (int i = 0; i < len; i++) {
        if (!is_consonant(str[i])) {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';  // Null-terminate the result string

    return result;
}

int main() {
    const char *input = "Hello World";
    char *result = delete_consonants(input);
    printf("Original string: %s\n", input);
    printf("String after removing consonants: %s\n", result);

    free(result);  // Free dynamically allocated memory

    return 0;
}
