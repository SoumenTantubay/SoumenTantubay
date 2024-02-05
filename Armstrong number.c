#include <stdio.h>
#include <math.h>
void main() {
printf("Armstrong numbers in the range [100, 1000]:\n");
for (int num = 100; num <= 1000; num++) {
int originalNum = num;
int numDigits = 0;
int sum = 0;
while (originalNum != 0) {
originalNum /= 10;
numDigits++;
}
originalNum = num;
while (originalNum != 0) {
int digit = originalNum % 10;
sum += pow(digit, numDigits);
originalNum /= 10;
}
if (num == sum) {
printf("%d\n", num);
}
}
}
