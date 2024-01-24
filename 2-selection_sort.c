#include <stdio.h>
#include "sort.h"
/**
 *
 *
 *
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * selection_sort - function sorts array of integer using selection sort
 *
 * @array: Pointer to the array of integer
 * @size: Size of integers sorted
 * Return: Always success
 */
void selection_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	int *min;

	if (array == NULL)
		return;
	for (i = 0; i < size - 1; i++)
	{
		min = array + i;
		for (j = i + 1; j < size; j++)
			min = (array[j] < *min) ? (array + j) : min;
		if ((array + i) != min)
		{
			swap(array + i, min);
			print_array(array, size);
		}
	}
}
