#include "sort.h"
#include <stdio.h>
#include <stddef.h>
/**
 * swap_int - swaps 2 variable
 * @a: var to be swapped
 * @b: to be swappped to
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}

/**
 * my_partition - order a subset of array of integer,
 * according to the aprtition scheme
 *
 * @array: arrsy of integers
 * @size: size of arrays
 * @left: starting index
 * @right: the closing index
 * Return: end index
 */
int my_partition(int *array, size_t size, int left, int right)
{
	int *pivot;
	int bottom, top;

	pivot = array + right;

	for (top = bottom = left; bottom < right; bottom++)
	{
		if (array[bottom] < *pivot)
		{
			if (top < bottom)
			{
				swap_int(array + bottom, array + top);
				print_array(array, size);
			}
			top++;
		}
	}

	if (array[top] > *pivot)
	{
		swap_int(array + top, pivot);
		print_array(array, size);
	}
	return (top);
}

/**
 * my_sort - sorts an srray of integer using the quick sort algorithm
 * @array: size of array
 * @left: left index of partition to be sorted
 * @right: right index of parttion to be sorted
 * @size: array size
 */
void my_sort(int *array, size_t size, int left, int right)
{
	int part;

	if (right - left > 0)
	{
		part = my_partition(array, size, left, right);
		my_sort(array, size, left, part - 1);
		my_sort(array, size, part + 1, right);
	}
}

/**
 * quick_sort - sorts an array of integer in ascending order
 * @array: array of int
 * @size: array size
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	my_sort(array, size, 0, size - 1);
}
