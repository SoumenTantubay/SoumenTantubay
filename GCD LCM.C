#include <stdio.h>
#include <stdlib.h>
void main() {
int num1, num2, gcd, lcm;
printf("Enter two positive integers: ");
scanf("%d %d", &num1, &num2);
if (num1 <= 0 || num2 <= 0) {
printf("Please enter positive integers.\n");
exit(0);
}
int originalNum1 = num1;
int originalNum2 = num2;
while (num2 != 0) {
int temp = num2;
num2 = num1 % num2;
num1 = temp;
}
gcd = num1;
lcm = (originalNum1 * originalNum2) / gcd;
printf("GCD of %d and %d is: %d\n", originalNum1, originalNum2, gcd);
printf("LCM of %d and %d is: %d\n", originalNum1, originalNum2, lcm);
}
