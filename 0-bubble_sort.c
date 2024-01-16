#include "sort.h"
/**
 * bubble_sort - Sorts an array of integers in ascending orderusing the Bubble sort algorithm
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void bubble_sort(int *array, size_t size)
{
    int swapped, temp;
    unsigned int index, yndex;

    for (index = 0; index < (size - 1); index++)
    {
        swapped = 0;
        for (yndex = 0; yndex < (size - index - 1); yndex++)
        {
            if (array[yndex] > array[yndex + 1])
            {
                temp = array[yndex];
                array[yndex] = array[yndex + 1];
                array[yndex + 1] = temp;
                swapped = 1;
                print_array(array, size);
                swapped = 1;
            }
        }
        if (swapped == 0)
            break;
    }
}