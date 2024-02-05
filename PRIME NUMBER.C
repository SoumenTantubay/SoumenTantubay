#include <stdio.h>
void main() {
int start, end;
printf("Enter the start and end of the range: ");
scanf("%d %d", &start, &end);
if (start < 2) {
start = 2; 
}
printf("Prime numbers in the range [%d, %d]:\n", start, end);
for (int num = start; num <= end; num++) {
int isPrime = 1;
for (int i = 2; i * i <= num; i++) {
if (num % i == 0) {
isPrime = 0;
break;
}
}
if (isPrime) {
printf("%d ", num);
}
}
printf("\n");
}
