#include "sort.h"

/**
 * swap - swaps position of elements in an array
 *
 * @a: pointer to the first element
 *
 * @b: pointer to second element
 *
 * Return: returns nothing
 */
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

/**
 * partition - find the partition position
 *
 * @array: pointer to the first element of the array
 *
 * @low: Starting index
 *
 * @high: Ending index
 *
 * Return: partition point
 */
int partition(int *array, int low, int high) {
  
  /* select the rightmost element as pivot */
  int pivot = array[high];
  
  /* pointer for greater element */
  int i = (low - 1);

  /* traverse each element of the array */
  /* compare them with the pivot */
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {
      /**
       * if element smaller than pivot is found 
       * swap it with the greater element pointed by i
       */
      i++;

      /* swap element at i with element at j */
      swap(&array[i], &array[j]);
    }
  }

  /* swap the pivot element with the greater element at i */
  swap(&array[i + 1], &array[high]);
  
  /* return the partition point */
  return (i + 1);
}

/**
 * quick_sort - sorts elements in an array using quick sort algo
 *
 * @array: pointer to the first element of the array
 *
 * @size: number of elements in the array
 *
 * Return: returns nothing
 */
void quick_sort(int *array, size_t size)
{
  int low, high;
  
  low = 0;
  high = size;
  
  if (low < high)
  {
    // find the pivot element such that
    // elements smaller than pivot are on left of pivot
    // elements greater than pivot are on right of pivot
    int pi = partition(array, low, high);
    
    // recursive call on the left of pivot
    quickSort(array, low, pi - 1);
    
    // recursive call on the right of pivot
    quickSort(array, pi + 1, high);
  }
}
