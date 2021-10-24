#include "sort.h"

/**
 * swap_2 - swaping elements of array
 * @xp: element
 * @yp: element
 * Return: Void
 */
void swap_2(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

/**
 * selection_sort - selection sort
 * @array: array
 * @size: size of array
 * Return: Void
 */
void selection_sort(int *array, size_t size)
{
	unsigned int a;
	unsigned int b;
	unsigned int min_idx = 0;

	for (a = 0; a < size; a++)
	{
		min_idx = a;
		for (b = a; b < size; b++)
		{
			if (array[b] < array[min_idx])
				min_idx = b;
		}
		if (min_idx != a)
		{
			swap_2(&array[min_idx], &array[a]);
			print_array(array, size);
		}
	}
}
