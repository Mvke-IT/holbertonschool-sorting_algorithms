#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
* print_list - Prints a list of integers
*
* @list: The list to be printed
*/
void print_list(const listint_t *list)
{
	int i;
	
	i = 0;
	while (list)
		{
			if (i > 0)
				printf(", ");
			printf("%d", list->n);
			++i;
			list = list->next;
		}
	printf("\n");
}

/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
<<<<<<< HEAD
		swapped = 0;
		for (j = 0; j < size - i - 1; j++)
=======
		bubbly = true;
		for (i = 0; i < len - 1; i++)
>>>>>>> ee1ba620012a068b7b79f04163c81c37849a38cd
		{
			if (array[i] > array[i + 1])
			{
<<<<<<< HEAD
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				swapped = 1;
				print_array(array, size); /*print array*/
			} /*end if*/
		} /*end inner for*/
	} /*end for*/
=======
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
>>>>>>> ee1ba620012a068b7b79f04163c81c37849a38cd
}
