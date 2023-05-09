#include <stdio.h>

int main() {
    int n, sum = 0;
    float average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int numbers[n];

    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    average = (float) sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f", average);

    return 0;
}

