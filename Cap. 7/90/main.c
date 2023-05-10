#include <stdio.h>

int calculateGCD(int num1, int num2) {
  int gcd;
  for (int i = 1; i <= num1 && i <= num2; i++) {
    if (num1 % i == 0 && num2 % i == 0) {
      gcd = i;
    }
  }
  return gcd;
}

int main() {
  int num1, num2;
  printf("Enter two numbers: ");
  scanf("%d %d", &num1, &num2);
  int gcd = calculateGCD(num1, num2);
  printf("The greatest common divisor of %d and %d is %d.\n", num1, num2, gcd);
  return 0;
}
