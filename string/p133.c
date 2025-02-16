//C Program to Remove Leading Zeros 
#include <stdio.h>
#include <string.h>

void removeLeadingZeros(char *str) {
    int i = 0;
    
    // Skip all leading zeros
    while (str[i] == '0' && str[i] != '\0') {
        i++;
    }
    
    // If the string contains only zeros, print "0"
    if (str[i] == '\0') {
        printf("0\n");
    } else {
        // Print the rest of the string (without leading zeros)
        printf("%s\n", &str[i]);
    }
}

int main() {
    char str[100];
    
    // Input the string (number)
    printf("Enter a number: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove trailing newline character, if present
    str[strcspn(str, "\n")] = '\0';
    
    // Call function to remove leading zeros
    removeLeadingZeros(str);
    
    return 0;
}
