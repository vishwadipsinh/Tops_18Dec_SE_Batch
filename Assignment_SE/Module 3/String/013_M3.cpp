#include <stdio.h>

void filteralphabets(char s1[], char s2[]) {
    int i, j;

    for (i = 0, j = 0; s1[i] != '\0'; i++) {
        if ((s1[i] >= 'a' && s1[i] <= 'z') || (s1[i] >= 'A' && s1[i] <= 'Z')) {
            s2[j] = s1[i];
            j++;
        }
    }

    // Null-terminate the result string
    s2[j] = '\0';
}

int main() {
    char inputString[150], outputString[150];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Function Calling 
    filteralphabets(inputString, outputString);

    // Modified string
    printf("String after removing non-alphabetic characters: %s\n", outputString);

    return 0;
}
