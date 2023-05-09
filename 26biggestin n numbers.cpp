#include <stdio.h>

int main() {
    int n, i, biggest;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    int numbers[n];

    for (i = 0; i < n; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    biggest = numbers[0];
    for (i = 1; i < n; i++) {
        if (numbers[i] > biggest) {
            biggest = numbers[i];
        }
    }

    printf("The biggest number is %d.\n", biggest);

    return 0;
}

