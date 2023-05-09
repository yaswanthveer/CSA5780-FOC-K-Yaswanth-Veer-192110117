#include <stdio.h>

int main() {
    int number, digit;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    printf("Digits of %d are: ", number);

    while (number > 0) {
        digit = number % 10;
        printf("%d ", digit);
        number /= 10;
    }

    return 0;
}

