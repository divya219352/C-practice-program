//C Program for Area And Perimeter Of Rectangle
#include <stdio.h>

int main() {
    float length, width, area, perimeter;

    // Get the length and width of the rectangle from the user
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Calculate the area and perimeter
    area = length * width;
    perimeter = 2 * (length + width);

    // Output the results
    printf("Area of the rectangle: %.2f\n", area);
    printf("Perimeter of the rectangle: %.2f\n", perimeter);

    return 0;
}
