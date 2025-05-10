// Name: SHAMIT
// Roll No: 24/B08/033
// Program: Find the size of a file in bytes

#include <stdio.h>

int main() {
    FILE *file;
    long fileSize;

    // Open the file in binary read mode
    file = fopen("example.txt", "rb");

    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    // Move the file pointer to the end
    fseek(file, 0, SEEK_END);

    // Get the position of the file pointer (i.e., the file size)
    fileSize = ftell(file);

    // Close the file
    fclose(file);

    // Output the file size
    printf("Size of the file: %ld bytes\n", fileSize);
    printf("Done by: SHAMIT (24/B08/033)\n");

    return 0;
}
