//C Program to Print all the Patterns that Match Given Pattern From a File
#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char filename[100], pattern[100], line[256];

    // Get the filename and pattern from the user
    printf("Enter the filename: ");
    scanf("%s", filename);
    printf("Enter the pattern to match: ");
    scanf("%s", pattern);

    // Open the file in read mode
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Lines that match the given pattern:\n");

    // Read each line from the file
    while (fgets(line, sizeof(line), file) != NULL) {
        // Check if the pattern exists in the line
        if (strstr(line, pattern) != NULL) {
            // Print the matching line
            printf("%s", line);
        }
    }

    // Close the file
    fclose(file);

    return 0;
}
