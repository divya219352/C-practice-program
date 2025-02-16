//C Program to Read/Write Structure to a File
#include <stdio.h>
#include <stdlib.h>

// Define a structure to hold student data
struct Student {
    int id;
    char name[50];
    float marks;
};

int main() {
    FILE *file;
    struct Student student1 = {101, "John Doe", 85.5};
    struct Student student2;

    // Open file for writing (write in binary mode)
    file = fopen("student.dat", "wb");
    if (file == NULL) {
        perror("Error opening file for writing");
        return 1;
    }

    // Write the structure to the file
    fwrite(&student1, sizeof(struct Student), 1, file);

    // Close the file after writing
    fclose(file);

    // Open file for reading (read in binary mode)
    file = fopen("student.dat", "rb");
    if (file == NULL) {
        perror("Error opening file for reading");
        return 1;
    }

    // Read the structure from the file
    fread(&student2, sizeof(struct Student), 1, file);

    // Display the read data
    printf("Student ID: %d\n", student2.id);
    printf("Student Name: %s\n", student2.name);
    printf("Student Marks: %.2f\n", student2.marks);

    // Close the file after reading
    fclose(file);

    return 0;
}
