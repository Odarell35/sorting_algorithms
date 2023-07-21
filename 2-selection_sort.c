#include "sort.h"
/**
 * selection_sort - selects the smallest element from an unsorted list
 * in each iteration and places that element at
 * the beginning of the unsorted list.
 * @array: array to sort
 * @size: size of array
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, store, k, temp;

	if (size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		store = i;
		for (k = i + 1; k < size; k++)
		{
			if (array[k] < array[store])
				store = k;
		}
		temp = array[store];
		array[store] = array[i];
		array[i] = temp;
		print_array(array, size);
	}
}
