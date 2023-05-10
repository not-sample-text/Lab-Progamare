#include <stdio.h>

double convertCelsiusToFahrenheit(double celsius) {
  double fahrenheit = (celsius * 9/5) + 32;
  return fahrenheit;
}

int main() {
  double celsius;
  printf("Enter the temperature in Celsius: ");
  scanf("%lf", &celsius);
  double fahrenheit = convertCelsiusToFahrenheit(celsius);
  printf("%lf degrees Celsius is %lf degrees Fahrenheit.\n", celsius, fahrenheit);
  return 0;
}
