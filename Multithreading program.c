#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>


void* print_even_numbers(void* arg) {
    printf("Even Numbers:\n");
    for (int i = 0; i <= 10; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
    pthread_exit(NULL);
}


void* print_odd_numbers(void* arg) {
    printf("Odd Numbers:\n");
    for (int i = 1; i < 10; i += 2) {
        printf("%d ", i);
    }
    printf("\n");
    pthread_exit(NULL);
}

int main() {
    pthread_t thread1, thread2;

    
    if (pthread_create(&thread1, NULL, print_even_numbers, NULL)) {
        fprintf(stderr, "Error creating thread1\n");
        return 1;
    }
    if (pthread_create(&thread2, NULL, print_odd_numbers, NULL)) {
        fprintf(stderr, "Error creating thread2\n");
        return 1;
    }

    
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    printf("Both threads have completed execution.\n");
    return 0;
}