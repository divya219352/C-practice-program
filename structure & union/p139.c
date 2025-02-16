//C Program to Store Student Records as Structures and Sort them by Name
#include <stdio.h>
#include <string.h>

// Define the structure for student information
struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

// Function to compare two strings (used for sorting)
int compareNames(const void *a, const void *b) {
    // Cast void pointers to Student pointers and compare their names
    return strcmp(((struct Student*)a)->name, ((struct Student*)b)->name);
}

int main() {
    int numStudents;

    // Input the number of students
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    struct Student students[numStudents];  // Declare an array of structures

    // Input student information
    for (int i = 0; i < numStudents; i++) {
        printf("\nEnter information for student %d\n", i + 1);
        printf("Enter student's name: ");
        getchar();  // To consume the newline character left by previous input
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0;  // Remove the newline character

        printf("Enter roll number: ");
        scanf("%d", &students[i].rollNumber);

        printf("Enter marks: ");
        scanf("%f", &students[i].marks);
    }

    // Sort the student records by name using qsort
    qsort(students, numStudents, sizeof(struct Student), compareNames);

    // Display the sorted student information
    printf("\nSorted Student Information (by Name):\n");
    for (int i = 0; i < numStudents; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll  Number: %d\n", students[i].rollNumber);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}
