#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
   // fgets(str, sizeof(str), stdin);  // read input string
     scanf("%s",str);
    // Convert to uppercase
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // convert to uppercase
        }
    }

    printf("Uppercase string: %s", str);
    return 0;
}
