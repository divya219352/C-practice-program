//Flexible Array Members in a Structure in C
#include <stdio.h>
#include <stdlib.h>

// Define the structure with a flexible array member
struct Student {
    int id;
    char name[50];
    int marks;
    int numSubjects;  // Number of subjects
    int subjects[];   // Flexible array member
};

// Function to create a new student and allocate memory for subjects
struct Student* createStudent(int numSubjects) {
    // Allocate memory for the structure + space for the flexible array
    struct Student *s = (struct Student*)malloc(sizeof(struct Student) + numSubjects * sizeof(int));
    if (s == NULL) {
        printf("Memory allocation failed.\n");
        return NULL;
    }
    s->numSubjects = numSubjects;
    return s;
}

// Function to display student information
void displayStudent(struct Student *s) {
    printf("Student ID: %d\n", s->id);
    printf("Name: %s\n", s->name);
    printf("Marks: %d\n", s->marks);
    printf("Subjects: ");
    for (int i = 0; i < s->numSubjects; i++) {
        printf("%d ", s->subjects[i]);
    }
    printf("\n");
}

int main() {
    int numSubjects;

    // Get number of subjects
    printf("Enter number of subjects: ");
    scanf("%d", &numSubjects);

    // Create a student with the specified number of subjects
    struct Student *student = createStudent(numSubjects);
    if (student == NULL) {
        return 1; // Exit if memory allocation failed
    }

    // Input student details
    printf("Enter student ID: ");
    scanf("%d", &student->id);
    getchar(); // To consume the newline character
    printf("Enter student name: ");
    fgets(student->name, sizeof(student->name), stdin);
    student->name[strcspn(student->name, "\n")] = '\0';  // Remove trailing newline

    printf("Enter student marks: ");
    scanf("%d", &student->marks);

    // Input subjects' marks
    printf("Enter marks for %d subjects:\n", numSubjects);
    for (int i = 0; i < numSubjects; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &student->subjects[i]);
    }

    // Display student details
    displayStudent(student);

    // Free allocated memory
    free(student);

    return 0;
}
