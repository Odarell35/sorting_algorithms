#include "sort.h"
#include <math.h>

/**
 * _pow_recursion - returns the value of x raised to the power of y
 *@x: number
 *@y: number
 *Return: y < 0 return -1
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
/**
 * shell-sort - in-place comparision
 * @array: array to be sorted
 * @size: size of array
 * Return: void
 */
void shell_sort(int *array, size_t size)
{
	size_t interval, i, j;
	int temp, value;

	value = _pow_recursion(3, (int)size);

	if (size < 2)
		return;
	for (interval = (value - 1) / 2; interval > 0; interval /= 2)
	{
		for (i = interval; i < size; i += 1)
		{
			temp = array[i];
			for (j = i; j >= interval && array[j - interval] > temp; j-= interval)
			{
				array[j] = array[j - interval];
			}
			array[j] = temp;
			print_array(array, size);
		}
	}
}
