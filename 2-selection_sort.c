#include "sort.h"

/**
 * selection_sort - sort an array of integers in ascending order
 * using the selection sort algorithm.
 * @array: array
 * @size: size
 */

void selection_sort(int *array, size_t size)
{
	int *min_int;
	int temp;
	size_t i, j;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min_int = array + i;
		for (j = i + 1; j < size; j++)
			min_int = (array[j] < *min_int) ? (array + j) : min_int;
		if ((array + i) != min_int)
		{
			temp = array[i];
			array[i] = *min_int;
			*min_int = temp;
			print_array(array, size);
		}
	}
}
