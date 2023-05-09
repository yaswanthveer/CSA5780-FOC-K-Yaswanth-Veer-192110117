#include <stdio.h>

int main() {
    int n, factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error: Factorial of negative numbers is not defined.");
        return 0;
    }

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    printf("The factorial of %d is %d", n, factorial);

    return 0;
}

