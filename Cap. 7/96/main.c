#include <stdio.h>

long long calculateFactorial(int num) {
  long long factorial = 1;
  for (int i = 1; i <= num; i++) {
    factorial *= i;
  }
  return factorial;
}

int main() {
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  long long factorial = calculateFactorial(num);
  printf("The factorial of %d is %lld.\n", num, factorial);
  return 0;
}
