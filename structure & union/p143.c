//Read/Write Structure to a File in C 
#include <stdio.h>
#include <stdlib.h>

// Define the structure to store student information
struct Student {
    char name[50];
    int age;
    int id;
};

// Function to write a structure to a file
void writeToFile(const char *filename, struct Student *s) {
    FILE *file = fopen(filename, "wb");  // Open file in write-binary mode
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return;
    }
    fwrite(s, sizeof(struct Student), 1, file);  // Write the structure to the file
    fclose(file);  // Close the file
    printf("Student record written to file.\n");
}

// Function to read a structure from a file
void readFromFile(const char *filename) {
    FILE *file = fopen(filename, "rb");  // Open file in read-binary mode
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return;
    }
    struct Student s;
    fread(&s, sizeof(struct Student), 1, file);  // Read the structure from the file
    fclose(file);  // Close the file
    printf("Student record read from file:\n");
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("ID: %d\n", s.id);
}

int main() {
    struct Student s1;

    // Input student details
    printf("Enter student's name: ");
    fgets(s1.name, sizeof(s1.name), stdin);
    s1.name[strcspn(s1.name, "\n")] = 0;  // Remove the newline character from name

    printf("Enter age: ");
    scanf("%d", &s1.age);

    printf("Enter ID: ");
    scanf("%d", &s1.id);

    // Write the structure to the file
    writeToFile("student.dat", &s1);

    // Read the structure from the file
    readFromFile("student.dat");

    return 0;
}
