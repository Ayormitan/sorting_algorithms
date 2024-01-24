#include <stdio.h>
#include "sort.h"
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
	size_t k;
	size_t min;

	for (i = 0; i < size - 1; ++i)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			int temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			for (k = 0; k < size; ++k)
			{
				if (k < size - 1)
				{
					printf("%d, ", array[k]);
				}
				else
				{
					printf("%d", array[k]);
				}
			}
			printf("\n");
		}
	}
}
