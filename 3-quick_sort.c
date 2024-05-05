#include "sort.h"
/**
 * quick_sort - Sorts an array of integers in ascending order.
 * @array: Pointer to the first element of the array
 * @size: Size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quick_sort_recursive(array, 0, size - 1, size);
}
