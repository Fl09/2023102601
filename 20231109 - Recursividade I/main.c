#include <stdio.h>
#include "functions.h"

int main(){
  int arr[] = {3,7,1,4,2,8,6,5}

  int maxElement = findMax( arr, sizeof(arr)/ sizeof(arr[0]));
  int minElement = findMin( arr, sizeof(arr)/ sizeof(arr[0]));
  int sum = calculateSum( arr, sizeof(arr)/ sizeof(arr[0]));
  int product = calculateProduct( arr, sizeof(arr)/ sizeof(arr[0]));

  printf("Max Element: %d\n", maxElement);
  printf("Min Element: %d\n", minElement);
  printf("Sum: %d\n", sum);
  printf("Product: %d\n", product);

  return 0;
}
