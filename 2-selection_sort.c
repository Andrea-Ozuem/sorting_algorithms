#include "sort.h"

/**
  *selection_sort - sorts an array in ascending order using the Selection sort
  *@array: array
  *@size: of array
  */
void selection_sort(int *array, size_t size)
{
	int tmp;
	size_t i, j, m;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		m = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[m])
				m = j;
		if (i != m)
		{
			tmp = array[i];
			array[i] = array[m];
			array[m] = tmp;
			print_array(array, size);
		}
	}
}
