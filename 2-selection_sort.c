#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: Pointer to the array to be sorted
 * @size: Number of elements in the array
 */
void selection_sort(int *array, size_t size)
{
	int i, j, min_idx, temp;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < (int)size - 1; i++)
	{
		min_idx = i;
		for (j = i + 1; j < (int)size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}
		if (min_idx != i)
		{
			/* Swap elements */
			temp = array[i];
			array[i] = array[min_idx];
			array[min_idx] = temp;
			/* Print the array after each swap */
			print_array(array, size);
		}
	}
}
