/*
3. WAP to find reverse of string using recursion
*/
#include <stdio.h>
#include <string.h>

void reverse_string(char str[], int start, int end) {
    if (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        reverse_string(str, start + 1, end - 1);
    }
}

int main() {
    char input_string[150];

    printf("Enter a string: ");
    fgets(input_string, sizeof(input_string), stdin);

    input_string[strcspn(input_string, "\n")] = '\0';

    int len = strlen(input_string);

    reverse_string(input_string, 0, len - 1);

    printf("Reversed string: %s\n", input_string);

    return 0;
}
