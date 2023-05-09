#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n/10; i++) {
        sum += i*10 + 2;
    }

    printf("The sum of the series 12 + 22 + 32 + ... + %d is: %d", n, sum);

    return 0;
}

