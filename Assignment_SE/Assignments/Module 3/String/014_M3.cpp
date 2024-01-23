/*
14. Write a program in C to combine two strings manually
*/#include <stdio.h>

void combine(char f[], char s[], char r[]) {
    int i, j;

    for (i = 0; f[i] != '\0'; i++) {
        r[i] = f[i];
    }

    for (j = 0; s[j] != '\0'; j++, i++) {
        r[i] = s[j];
    }

    // Null-terminate the result string
    r[i] = '\0';
}

int main() {
    char s1[150], s2[150], combinedoutput[300];

    printf("Enter the first string: ");
    fgets(s1, sizeof(s1), stdin);

    printf("Enter the second string: ");
    fgets(s2, sizeof(s2), stdin);

    // Calling Function
    combine(s1, s2, combinedoutput);

    // combined string
    printf("after combining string: %s\n", combinedoutput);

    return 0;
}
