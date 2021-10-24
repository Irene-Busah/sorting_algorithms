#include "sort.h"

/**
 * swap - swap function
 * @xp: pointer to int
 * @yp: pointer to size t
 * Return: Void
 */
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

/**
 * bubble_sort - bubble sort algo
 * @array: array
 * @size: size of array
 * Return: Void
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int a;
	unsigned int b;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size - a - 1; b++)
		{
			if (array[b] > array[b + 1])
			{
				swap(&array[b], &array[b + 1]);
				print_array(array, size);
			}
		}
	}
}
