//C Program to Rename a file
#include <stdio.h>

int main() {
    char old_name[100], new_name[100];

    // Get the current name and new name from the user
    printf("Enter the current name of the file: ");
    scanf("%s", old_name);
    printf("Enter the new name for the file: ");
    scanf("%s", new_name);

    // Attempt to rename the file
    if (rename(old_name, new_name) == 0) {
        printf("File renamed successfully!\n");
    } else {
        perror("Error renaming file");
    }

    return 0;
}
