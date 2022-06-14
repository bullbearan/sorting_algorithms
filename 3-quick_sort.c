#include "sort.h"
/**
 * partition - Entry point
 * @array: array
 * @low: low
 * @high: high
 * @size: size
 * Return: Always 0
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high], i = low - 1, j, tmp;

	for (j = low; j <= high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
			if (i != j)
				print_array(array, size);
		}
	}
		return (i);
}
/**
 * thequick - Entry point
 * @array: array
 * @low: low
 * @high: high
 * @size: size
 * Return: Always 0
 */
void thequick(int *array, int low, int high, size_t size)
{
	int mid;

	if (low >= high)
		return;
	mid = partition(array, low, high, size);
	thequick(array, low, mid - 1, size);
	thequick(array, mid + 1, high, size);
}
/**
 * quick_sort - Entry point
 * @array: array
 * @size: size
 * Return: Always 0
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	thequick(array, 0, size - 1, size);
}
