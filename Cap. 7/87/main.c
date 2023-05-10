#include <stdio.h>

int isPositiveEven(int num){
  if (num % 2 == 0 && num > 0) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  if (isPositiveEven(num) == 1) {
    printf("%d is positive and even.\n", num);
  } else {
    printf("%d is not positive and even.\n", num);
  }
  return 0;
}
