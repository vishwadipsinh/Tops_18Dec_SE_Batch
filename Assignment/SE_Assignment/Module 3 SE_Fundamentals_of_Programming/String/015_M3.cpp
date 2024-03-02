/*
15.Write a program in C to find the largest and smallest words in a string.
*/

#include <stdio.h>
#include <string.h>

void find_extremes(char input[]) {
    char current_word[50], largest_word[50], smallest_word[50];
    int i, j, length, smallest_length = INT_MAX, largest_length = 0;
    int is_space;

    for (i = 0; input[i] != '\0'; i++) {
        // Reset current_word for each new word
        for (j = 0; input[i] != ' ' && input[i] != '\0'; i++, j++) {
            current_word[j] = input[i];
        }
        current_word[j] = '\0';

        // Check if current_word is not empty
        if (j > 0) {
            length = strlen(current_word);

            // Update smallest word if current_word is smaller
            if (length < smallest_length) {
                smallest_length = length;
                strcpy(smallest_word, current_word);
            }

            // Update largest word if current_word is larger
            if (length > largest_length) {
                largest_length = length;
                strcpy(largest_word, current_word);
            }
        }
    }

    printf("Smallest word: %s\n", smallest_word);
    printf("Largest word: %s\n", largest_word);
}

int main() {
    char input_string[500];

    printf("Enter a string: ");
    fgets(input_string, sizeof(input_string), stdin);

    // Call the function
    find_extremes(input_string);

    return 0;
}
