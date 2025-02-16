//C Program to Make a File Read-Only
#include <stdio.h>
#include <windows.h>

int main() {
    char filename[100];
    printf("Enter the filename to make read-only: ");
    scanf("%s", filename);

    if (SetFileAttributes(filename, FILE_ATTRIBUTE_READONLY)) {
        printf("File '%s' is now read-only.\n", filename);
    } else {
        printf("Error making file read-only.\n");
    }

    return 0;
}
