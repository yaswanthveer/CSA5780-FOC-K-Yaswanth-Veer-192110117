#include <stdio.h>

int main() {
    int number, sum = 0, digit;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    while (number > 0) {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }

    printf("Sum of digits = %d", sum);

    return 0;
}


