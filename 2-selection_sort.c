#include "sort.h"
/**
 * selection_sort - sorts elements in an array using selection algo
 *
 * @array: pointer to the first element of the array
 *
 * @size: number of elements in the array
 *
 * Return: returns nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t idx_min, current, next_idx;
	int temp;

	if (array == NULL || size == 0)
		return;

	for (current = 0; current < size - 1; current++)
	{
		next_idx = current + 1;
		idx_min = current;

		while (next_idx < size)
		{
			if (array[next_idx] < array[idx_min])
			{
				idx_min = next_idx;
			}
			next_idx++;
		}
		if (array[idx_min] < array[current])
		{
			temp = array[idx_min];
			array[idx_min] = array[current];
			array[current] = temp;
			print_array(array, size);
		}
	}
}
