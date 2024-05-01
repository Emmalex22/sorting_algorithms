#include "sort.h"
/**
 * bubble_sort - Sorts an array of integers in ascending order using
 * the bubble sort algorithm
 * @array: Pointer to the first element of the array
 * @size: Size of the array
 */
void bubble_sort(int *array, size_t size)
{
	int i, j, temp, pass;

	for (i = 0; i < (int)size - 1; i++)
	{
		pass = 0;
		for (j = 0; j < (int)size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				pass = 1;
				print_array(array, size);
			}
		}
		if (pass == 0)
			break;
	}
}

