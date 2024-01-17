#include "sort.h"

/**
 * bubble_sort - Sorts array of integers in ascending order using Bubble Sort
 *
 * @array: The array to be sorted
 * @size: Number of elements in the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp;
	int swapped;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				/* Swap the two elements */
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				swapped = 1;

				/* Print the array after each swap */
				print_array(array, size);
			}
		}

		/* If no two elements were swapped in inner loop, the array is sorted */
		if (swapped == 0)
			break;
	}
}