//C Program to Check Whether a Character is Vowel or Consonant
#include <stdio.h>

int main() {
    char ch;

    // Ask the user for input
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is a vowel or consonant
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        printf("The character is a vowel.\n");
    } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("The character is a consonant.\n");
    } else {
        printf("The character is neither a vowel nor a consonant.\n");
    }

    return 0;
}
