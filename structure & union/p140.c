//C Program to Add N Distances Given in inch-feet System using Structures
#include <stdio.h>

// Define the structure to store distance in feet and inches
struct Distance {
    int feet;
    int inches;
};

// Function to normalize the distance (convert inches > 12 to feet)
void normalize(struct Distance *d) {
    if (d->inches >= 12) {
        d->feet += d->inches / 12;  // Convert inches to feet
        d->inches = d->inches % 12; // Keep the remainder inches
    }
}

// Function to add two distances
struct Distance addDistances(struct Distance d1, struct Distance d2) {
    struct Distance result;
    result.feet = d1.feet + d2.feet;
    result.inches = d1.inches + d2.inches;
    normalize(&result); // Normalize the result
    return result;
}

int main() {
    int n;

    // Input the number of distances to add
    printf("Enter the number of distances: ");
    scanf("%d", &n);

    struct Distance distances[n]; // Array to store n distances

    // Input n distances
    for (int i = 0; i < n; i++) {
        printf("\nEnter distance %d (feet inches): ", i + 1);
        scanf("%d %d", &distances[i].feet, &distances[i].inches);
    }

    // Initialize total distance
    struct Distance totalDistance = {0, 0};

    // Add all distances to the total distance
    for (int i = 0; i < n; i++) {
        totalDistance = addDistances(totalDistance, distances[i]);
    }

    // Display the total distance
    printf("\nTotal Distance: %d feet %d inches\n", totalDistance.feet, totalDistance.inches);

    return 0;
}
