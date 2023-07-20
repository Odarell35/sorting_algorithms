#include "sort.h"
/**
 * bubble_sort - compare two adjacent elements
 * and swaps them until desired order
 * @array: array of elements
 * @size: size of array
 * Return: void
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int swap, store;

	for (i = 0; i < size - 1; i++)
	{
		swap = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				store = array[j];
				array[j] = array[j + 1];
				array[j + 1] = store;
				swap = 1;
				print_array(array, size);
			}
		}

	if (swap == 0)
		break;
	}
}
