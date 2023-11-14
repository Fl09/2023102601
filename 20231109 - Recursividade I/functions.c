#include "functions.h"

int findMaxRecursive (int arr[], int size, int index, int maxSoFar){
  if (index == size){
    return maxSoFar;
  }

  if (arr[index] > maxSoFar){
    maxSoFar = arr[index];
  }

  return findMaxRecursive(arr, size, index +1, maxSoFar);
}

int findMax(int arr[], int size){
  if (size <= 0){
    return - 1 // indicar o erro
  }

  return findMaxRecursive(arr, size, 0, arr[0]);
}

int findMinRecursive (int arr[], int size, int index, int minSoFar){
  if (index == size){
    return minSoFar;
  } 

  if (arr[index] < minSoFar){
    minSoFar = arr[index];
  }

  return findMinRecursive(arr, size, 0, arr[0]);
}

int findMin (int arr[], int size) {
    if (size <= 0) {
        return -1; // Indicando um erro (por exemplo, vetor vazio)
    }

    return findMinRecursive(arr, size, 0, arr[0]);
}

int calculateSumRecursive(int arr[], int size, int index, int sumSoFar) {
    if (index == size) {
        return sumSoFar;
    }

    sumSoFar += arr[index];

    return calculateSumRecursive(arr, size, index + 1, sumSoFar);
}
int calculateSum(int arr[], int size) {
    return calculateSumRecursive(arr, size, 0, 0);
}

int calculateProductRecursive(int arr[], int size, int index, int productSoFar) {
    if (index == size) {
        return productSoFar;
    }

    productSoFar *= arr[index];

    return calculateProductRecursive(arr, size, index + 1, productSoFar);
}

int calculateProduct(int arr[], int size) {
    return calculateProductRecursive(arr, size, 0, 1);
}
