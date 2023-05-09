#include <stdio.h>

int main() {
    int number, reversed = 0, remainder;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    while (number != 0) {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number /= 10;
    }

    printf("Reversed number = %d", reversed);

    return 0;
}

