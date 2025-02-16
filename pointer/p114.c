//How to Return a Pointer from a Function in C
#include <stdio.h>

int* returnStaticPointer() {
    static int x = 10;  // Static variable
    return &x;           // Return pointer to the static variable
}

int main() {
    int* ptr = returnStaticPointer();
    printf("Value: %d\n", *ptr);  // Prints: Value: 10
    return 0;
}
