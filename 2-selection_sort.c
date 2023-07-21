#include "sort.h"
/**
 * findminimum - looks for the minimum value in an array
 * @array: array to search
 * @size: size of array
 * @idx: index number
 * Return: min value
 */
int findminimum(int array[], int size, int idx)
{
	int min, i, min_index;

	min = array[idx];
	min_index = idx;
	for (i = idx; i < size; i++)
	{
		if (array[i] < min)
		{
			min =  array[i];
			min_index = i;
		}
	}
	if ( min_index == idx)
		return (-1);
return (min_index);
}
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
	int min_index, temp, i;

	if (size < 2)
		return;
	for (i = 0; i < (int)size - 1; i++)
	{
		min_index = findminimum(array, size, i);
		if (min_index != -1)
		{
			temp = array[i];
			array[i] = array[min_index];
			array[min_index] = temp;
			print_array(array, size);
		}
	}
}
