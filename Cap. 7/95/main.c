#include <stdio.h>

int calculateSumOfDigits(int num) {
  int sum = 0;
  while (num != 0) {
    sum += num % 10;
    num /= 10;
  }
  return sum;
}

int main() {
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  int sum = calculateSumOfDigits(num);
  printf("The sum of digits in %d is %d.\n", num, sum);
  return 0;
}
