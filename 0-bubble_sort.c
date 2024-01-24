#include <stdio.h>
#include "sort.h"
/**
 * swap - Function swaps integers
 *
 * @a: First integer compared
 * @b: Second integer compared
 * Return: Always sucess
 */
void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/**
 * bubble_sort - bubble sort algorithm function to sort an array of integer
 *
 * @array: A pointer to list of arrays
 * @size: The size of the arrays
 * Return: Always success
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	size_t k;

	for (i = 0; i < size - 1; ++i)
	{
		for (j = 0; j < size - i - 1; ++j)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
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
}
