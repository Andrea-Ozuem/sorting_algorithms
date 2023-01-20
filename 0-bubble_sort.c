#include "sort.h"

/**
  *bubble_sort - sorts an array of ints using the Bubble sort algorithm
  *@array: array
  *@size: size of array
  */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int swaps = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				swaps = 1;
				print_array(array, size);
			}
		}
		if (swaps == 0)
			return;
	}
}

/**
  *swap - swaps two integers
  *@a: first arg
  *@b: second arg
  */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
