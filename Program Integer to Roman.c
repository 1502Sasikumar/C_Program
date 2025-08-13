//Integer to Roman
#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char roman[50]; 

    
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};

    printf("Enter the value of N: ");
    scanf("%d", &n);

    roman[0] = '\0'; 
    int i = 0;      

    while (n > 0) {
        while (n >= values[i]) {
            strcat(roman, symbols[i]); 
            n -= values[i];           
        }
        i++; 
    }
    printf("Integer to Roman: %s\n", roman);
    return 0;
}
