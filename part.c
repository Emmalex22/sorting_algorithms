#include "sort.h"
/**
 * partition - Lomuto partition scheme
 * @array: Array to be partitioned
 * @low: Starting index of the partition
 * @high: Ending index of the partition
 * @size: Size of the array
 * Return: Index of the pivot element
 */
int partition(int *array, int low, int high, size_t size)
{
	int i, j, pi, temp, pivot = array[high];
	i = low - 1;
	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			print_array(array, size);
		}
	}
	pi = i + 1;
	temp = array[pi];
	array[pi] = array[high];
	array[high] = temp;
	print_array(array, size);
	return (pi);
}
