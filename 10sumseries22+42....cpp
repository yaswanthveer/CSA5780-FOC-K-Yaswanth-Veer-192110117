#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {
        sum += i * i;
    }

    printf("The sum of the series 22 + 42 + 62 + ... + %d^2 is: %d", n, sum);

    return 0;
}

