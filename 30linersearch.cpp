#include <stdio.h>

int main() {
    int arr[100], n, i, x, flag = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &x);

    for(i=0; i<n; i++) {
        if(arr[i] == x) {
            flag = 1;
            printf("%d is found at position %d.\n", x, i+1);
            break;
        }
    }

    if(flag == 0) {
        printf("%d is not found in the array.\n", x);
    }

    return 0;
}

