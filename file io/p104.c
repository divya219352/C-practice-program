//C Program to Create a Temporary File
#include <stdio.h>

int main() {
    FILE *tempFile;
    const char *message = "This is a temporary file created for demonstration purposes.";

    // Create a temporary file using tmpfile()
    tempFile = tmpfile();
    if (tempFile == NULL) {
        perror("Failed to create temporary file");
        return 1;
    }

    // Write some data to the temporary file
    fprintf(tempFile, "%s\n", message);

    // Rewind the file pointer to the beginning to read from the file
    rewind(tempFile);

    // Read the content from the temporary file and display it
    char buffer[256];
    while (fgets(buffer, sizeof(buffer), tempFile) != NULL) {
        printf("Read from temporary file: %s", buffer);
    }

    // Close the temporary file (it will be deleted automatically)
    fclose(tempFile);

    return 0;
}
