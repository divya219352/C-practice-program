//C Program to Add 2 Binary Strings
#include <stdio.h>
#include <string.h>

void addBinaryStrings(char *a, char *b, char *result) {
    int i, j, carry = 0, sum;
    int len_a = strlen(a);
    int len_b = strlen(b);
    
    // Start from the rightmost bit of both strings
    i = len_a - 1;
    j = len_b - 1;
    
    // Iterate through both strings
    while (i >= 0 || j >= 0 || carry) {
        // Get the current bit from string 'a' and 'b', if available
        sum = carry;
        if (i >= 0) sum += a[i] - '0';  // Convert char to int
        if (j >= 0) sum += b[j] - '0';  // Convert char to int
        
        // Calculate carry for the next iteration
        carry = sum / 2;
        
        // Store the current result bit ('0' or '1')
        result[i > j ? i : j] = (sum % 2) + '0';
        
        // Move to the next bits in 'a' and 'b'
        i--;
        j--;
    }
    
    // Reverse the result string since we filled it from right to left
    result[len_a > len_b ? len_a : len_b] = '\0';  // Null-terminate the result string
    int len = strlen(result);
    for (i = 0, j = len - 1; i < j; i++, j--) {
        char temp = result[i];
        result[i] = result[j];
        result[j] = temp;
    }
}

int main() {
    char a[100], b[100], result[101];
    
    // Input binary strings
    printf("Enter the first binary string: ");
    fgets(a, sizeof(a), stdin);
    printf("Enter the second binary string: ");
    fgets(b, sizeof(b), stdin);

    // Remove newline characters if present
    a[strcspn(a, "\n")] = '\0';
    b[strcspn(b, "\n")] = '\0';

    // Call the function to add binary strings
    addBinaryStrings(a, b, result);

    // Output the result
    printf("Sum of the two binary strings: %s\n", result);
    
    return 0;
}
