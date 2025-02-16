//C Program to Store Information of Students Using Structure
#include <stdio.h>

// Define the structure for storing student information
struct Student {
    char name[50];    // Student's name
    int rollNumber;   // Roll number of the student
    float marks;      // Marks of the student
};

int main() {
    // Declare a structure variable to hold student information
    struct Student student1;

    // Input information for student1
    printf("Enter student's name: ");
    fgets(student1.name, sizeof(student1.name), stdin);  // Reading name (including spaces)
    
    printf("Enter roll number: ");
    scanf("%d", &student1.rollNumber);
    
    printf("Enter marks: ");
    scanf("%f", &student1.marks);

    // Display the student information
    printf("\nStudent Information:\n");
    printf("Name: %s", student1.name);
    printf("Roll Number: %d\n", student1.rollNumber);
    printf("Marks: %.2f\n", student1.marks);

    return 0;
}
