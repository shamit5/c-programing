#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    long fileSize;

    // Ask user for file name
    printf("Enter the file name: ");
    scanf("%s", filename);

    // Try opening in binary read mode
    file = fopen(filename, "rb");

    // If file doesn't exist, create it
    if (file == NULL) {
        printf("File does not exist. Creating a new file named '%s'.\n", filename);
        file = fopen(filename, "wb");  // Create empty file
        if (file == NULL) {
            printf("Error: Could not create file.\n");
            return 1;
        }
        fclose(file);

        // Reopen in read mode to check size
        file = fopen(filename, "rb");
    }

    // Move to end of file
    fseek(file, 0, SEEK_END);
    fileSize = ftell(file);  // Get size
    fclose(file);

    printf("Size of the file '%s' is: %ld bytes\n", filename, fileSize);
    printf("Done by SRISHTI 24/B08/039");

    return 0;
}
