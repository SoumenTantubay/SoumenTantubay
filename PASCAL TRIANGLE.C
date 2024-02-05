#include <stdio.h>
#include <stdlib.h>
void main() {
int n;
printf("Enter the number of rows for Pascal's triangle: ");
scanf("%d", &n);
if (n <= 0) {
printf("Please enter a positive integer.\n");
exit(0);
}
for (int i = 0; i < n; i++) {
int coef = 1;
for (int j = 0; j < n - i; j++) {
printf(" ");
}
for (int j = 0; j <= i; j++) {
if (j > 0) {
coef = coef * (i - j + 1) / j;
}
printf("%6d", coef);
}
printf("\n");
}
}
