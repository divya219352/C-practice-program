//C Program to Append the Content of One Text File to Another
#include <stdio.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char ch;

    // Open the source file in read mode
    sourceFile = fopen("source.txt", "r");
    if (sourceFile == NULL) {
        printf("Error opening source file.\n");
        return 1;
    }

    // Open the destination file in append mode
    destinationFile = fopen("destination.txt", "a");
    if (destinationFile == NULL) {
        printf("Error opening destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    // Append the content of the source file to the destination file
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    printf("Content of 'source.txt' has been appended to 'destination.txt'.\n");

    // Close both files
    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}
