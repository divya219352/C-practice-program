//C Program to Store Student Records as Structures and Sort them by Age or ID
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the structure for storing student information
struct Student {
    char name[50];
    int age;
    int id;
};

// Function to compare students by age (for sorting)
int compareByAge(const void *a, const void *b) {
    return ((struct Student*)a)->age - ((struct Student*)b)->age;
}

// Function to compare students by ID (for sorting)
int compareByID(const void *a, const void *b) {
    return ((struct Student*)a)->id - ((struct Student*)b)->id;
}

int main() {
    int numStudents, choice;

    // Input number of students
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    struct Student students[numStudents]; // Array to store student records

    // Input student information
    for (int i = 0; i < numStudents; i++) {
        printf("\nEnter information for student %d\n", i + 1);
        printf("Enter student's name: ");
        getchar();  // Consume newline character left by previous scanf
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0;  // Remove newline from name

        printf("Enter age: ");
        scanf("%d", &students[i].age);

        printf("Enter ID: ");
        scanf("%d", &students[i].id);
    }

    // Ask the user for the sorting criteria
    printf("\nHow do you want to sort the students?\n");
    printf("1. By Age\n");
    printf("2. By ID\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Sort the student records based on user choice
    if (choice == 1) {
        qsort(students, numStudents, sizeof(struct Student), compareByAge);
        printf("\nSorted by Age:\n");
    } else if (choice == 2) {
        qsort(students, numStudents, sizeof(struct Student), compareByID);
        printf("\nSorted by ID:\n");
    } else {
        printf("\nInvalid choice.\n");
        return 0;
    }

    // Display sorted student information
    for (int i = 0; i < numStudents; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("ID: %d\n", students[i].id);
    }

    return 0;
}
