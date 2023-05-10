#include <stdio.h>

int getMax(int arr[], int size) {
  int max = arr[0];
  for (int i = 1; i < size; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  return max;
}

int main() {
  int arr[100], size, i;
  printf("Enter the size of the array: ");
  scanf("%d", &size);
  printf("Enter %d elements of the array:\n", size);
  for (i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }
  int max = getMax(arr, size);
  printf("The maximum value in the array is %d.\n", max);
  return 0;
}
