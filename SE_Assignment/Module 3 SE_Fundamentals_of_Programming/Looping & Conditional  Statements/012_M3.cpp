#include <stdio.h>

int main() {
    int number, a, b, n = 0, result = 0;

    printf("Enter an Number: ");
    scanf("%d", &number);

    a = number;

    for (; a != 0; ++n) {
        a /= 10;
    }

    a = number;

    for (; a != 0; a /= 10) {
        b = a % 10;

        int power = 1;
        for (int i = 0; i < n; ++i) {
            power *= b;
        }

        result += power;
    }

    if (result == number)
        printf("%d is an Armstrong number.\n", number);
    else
        printf("%d is not an Armstrong number.\n", number);

    return 0;
}
