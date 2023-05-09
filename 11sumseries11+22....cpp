#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i * 11;
    }

    printf("The sum of the series 11 + 22 + 33 + ... + %d%d is: %d", n, n, sum);

    return 0;
}

