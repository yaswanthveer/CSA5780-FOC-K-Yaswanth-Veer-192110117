#include <stdio.h>
#include <math.h>

int main() {
    double x, sum = 1.0, term = 1.0;
    int i, n;

    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the number of terms in the series: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++) {
        term = term * x / i;
        sum += term;
    }

    printf("e^(%lf) - 1 = %lf", x, sum);

    return 0;
}

