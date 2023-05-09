#include <stdio.h>
int main() 
{
    int n, i, t1 = 0, t2 = 1, nextTerm;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("The Fibonacci series from 0 to %d is:\n", n);
    for (i = 0; i <= n; i++) 
	{
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}

