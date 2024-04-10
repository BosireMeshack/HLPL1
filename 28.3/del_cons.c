#include <stdio.h>
#include <stdlib.h>
#include<strings.h>
#include<ctype.h>

//returns non-vowel characters
int is_consonant(char c) {
    //converts all characters to lowercase
    c = tolower(c);
    return !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    
}

char *delete_consonants(const char *str) {
    int len = strlen(str);
    char *result = (char *)malloc((len + 1) * sizeof(char));  // Allocate memory for the result

    //counter for the non-consonant array
    int j = 0;
    //loop checking each character in the input character array
    for (int i = 0; i < len; i++) {
        if (!is_consonant(str[i])) {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';  // indicates the end of the new character array

    return result;
}


int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        char original[101]; 
        fgets(original, 101, stdin); 

        printf("%s\n", delete_consonants(original));

        free(delete_consonants(original));
    }

    
    

    return EXIT_SUCCESS;
}
