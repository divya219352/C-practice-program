//C Program to Read Content From One File and Write it Into Another File
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

    // Open the destination file in write mode
    destinationFile = fopen("destination.txt", "w");
    if (destinationFile == NULL) {
        printf("Error opening destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    // Read content from source file and write it to destination file
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    printf("Content from 'source.txt' has been written to 'destination.txt'.\n");

    // Close both files
    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}
