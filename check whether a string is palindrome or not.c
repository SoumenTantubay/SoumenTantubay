#include <stdio.h>
#include <string.h>
#include <ctype.h>
void main() {
// Declare variables
char str[100];
// Input the string
printf("Enter a string: ");
gets(str);
// Check if the string is a palindrome
int left = 0;
int right = strlen(str) - 1;
int isPalindrome = 1; // Assume the string is a palindrome
while (left < right) {
// Skip non-alphabetic characters from the left
while (!isalpha(str[left]) && left < right) {
left++;
}
// Skip non-alphabetic characters from the right
while (!isalpha(str[right]) && left < right) {
right--;
}
// Compare the characters (case-insensitive)
if (tolower(str[left]) != tolower(str[right])) {
isPalindrome = 0; // Not a palindrome
break;
}
left++;
right--;
}
// Display the result
if (isPalindrome) {
printf("The string is a palindrome.\n");
} else {
printf("The string is not a palindrome.\n");
}
}
