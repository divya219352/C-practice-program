//C program to Compare Two Files and Report Mismatches
#include <stdio.h>

int main() {
    FILE *file1, *file2;
    char ch1, ch2;
    int position = 1;

    file1 = fopen("file1.txt", "r");
    file2 = fopen("file2.txt", "r");

    if (file1 == NULL || file2 == NULL) {
        printf("Error opening one or both files.\n");
        return 1;
    }

    while ((ch1 = fgetc(file1)) != EOF && (ch2 = fgetc(file2)) != EOF) {
        if (ch1 != ch2) {
            printf("Mismatch at position %d: '%c' in file1 != '%c' in file2\n", position, ch1, ch2);
        }
        position++;
    }

    if ((ch1 != EOF) || (ch2 != EOF)) {
        printf("Files have different lengths.\n");
    } else {
        printf("Files are identical.\n");
    }

    fclose(file1);
    fclose(file2);

    return 0;
}
