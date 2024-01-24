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
	size_t index;
	int temp;
	int swap, flag = 0;

	if (array == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		temp = i;
		flag = 0;
		for (index = i + 1; index < size; index++)
		{
			if (array[temp] > array[index])
			{
				temp = index;
				flag += 1;
			}
		}
		swap = array[i];
		array[i] = array[temp];
		array[temp] = swap;
		if (flag != 0)
			print_array(array, size);
	}
}
