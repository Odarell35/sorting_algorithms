#include "sort.h"
#include <math.h>

/**
 * shell_sort - in-place comparision
 * @array: array to be sorted
 * @size: size of array
 * Return: void
 */
void shell_sort(int *array, size_t size)
{
	size_t interval, i, j;
	int temp;

/*	value = _pow_recursion(3, (int)size);*/
	if (size < 2)
		return;
	while (interval < (size / 3))
		interval = interval * 3 + 1;
	for (interval = interval; interval > 0; interval /= 3)
	{
		for (i = interval; i < size; i += 1)
		{
			temp = array[i];
		for (j = i; j > (interval - 1) && array[j - interval] >= temp; j -= interval)
		{
			array[j] = array[j - interval];
		}
			array[j] = temp;
			print_array(array, size);
		}
	}
}
