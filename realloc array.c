#include<stdio.h>

int main() {
    int arr[50];
    int i = 0;

    
    while (1) {
        scanf("%d", &arr[i]);
        if (arr[i] == -1) {
            arr[i] = -2;  
            break;
        }
        i++;
    }

    
    for (int j = 0; j <= i; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");

    return 0;
}
