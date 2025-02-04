#include <stdio.h>

void decimalToBinary(int n) {
    if (n > 1) {
        decimalToBinary(n / 2);  
    }
    printf("%d", n % 2);  
}

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    
    if (n == 0) {
        printf("0");
    } else {
        decimalToBinary(n);
    }

    return 0;
}
