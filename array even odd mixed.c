#include <stdio.h>

int findType(int n, int *arr) {
    int even = 0, odd = 0;
    
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    if(even == n)
        return 1;  // All even
    else if(odd == n)
        return 2;  // All odd
    else
        return 0;  // Mixed
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = findType(n, arr);
    if(result == 1)
        printf("Even\n");
    else if(result == 2)
        printf("Odd\n");
    else
        printf("Mixed\n");

    return 0;
}
