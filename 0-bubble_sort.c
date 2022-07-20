#include "sort.h"

/**
 * bubble_sort - bubble sort algo that sorts elements in an array in asc order
 *
 * @array: pointer to the array to be sorted
 *
 * @size: size of the array to be sorted
 *
 * Return: returns nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0;
	int temp;

	/**
	 * if (size == 1)
	{
		print_array(array, size);
		return;
	}
	*/

	for (j = 0; j < size - 1; j++)
	{
		/**
		 * (size - j) - 1 cos after every iteration,
		 * the (size - j)th element is in its rightful place.
		 */
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
			else
				continue;
		}
	}
}
