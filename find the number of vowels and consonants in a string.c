#include <stdio.h>
#include <ctype.h>
void main() {
// Declare variables
char str[100];
int vowels = 0, consonants = 0, i;
// Input the string
printf("Enter a string: ");
gets(str);
// Count the number of vowels and consonants
for (i = 0; str[i] != '\0'; i++) {
// Convert each character to lowercase for case-insensitive comparison
char ch = tolower(str[i]);

// Check if the character is a letter
if ((ch >= 'a' && ch <= 'z')) {
// Check if the letter is a vowel
if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
vowels++;
} else {
consonants++;
}
}
}

// Display the results
printf("Number of vowels: %d\n", vowels);
printf("Number of consonants: %d\n", consonants);
}
