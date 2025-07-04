#include <stdio.h>

int sumArray(int arr[], int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n;

    printf("Enter the size of the array:\n");
    scanf("%d", &n);

    int a[n];

    printf("Enter the array elements:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int result = sumArray(a, n);
    printf("Sum of array elements: %d\n", result);

    return 0;
}
