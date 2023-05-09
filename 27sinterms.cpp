#include <stdio.h>
#include <math.h>

int main() {
    double x, term, sinx;
    int i, j, sign;

    printf("Enter the value of x in radians: ");
    scanf("%lf", &x);

    sign = -1; // set initial sign to negative
    sinx = term = x; // set initial term and sine value to x

    for (i = 3; i <= 15; i += 2) {
        term *= (x * x) / (i * (i - 1)); // calculate the next term
        sinx += (sign * term); // add the next term to the sine value
        sign *= -1; // toggle the sign for the next term
    }

    printf("sin(%.2lf) = %.4lf\n", x, sinx);
    return 0;
}

