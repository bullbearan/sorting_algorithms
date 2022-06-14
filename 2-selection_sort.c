#include "sort.h"
/**
 * selection_sort - Entry point
 * @array: array
 * @size: size
 * Return: Always 0
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, n, tmp;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		n = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[n])
				n = j;
		if (i != n)
		{
			tmp = array[i];
			array[i] = array[n];
			array[n] = tmp;
			print_array(array, size);
		}
	}
}
