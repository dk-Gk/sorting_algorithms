#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * @array: array to be sorted
 * @size: size of array
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
size_t i, j, min;
int temp;
for (i = 0; i < size; i++)
{
min = i;
for (j = i + 1; j < size; j++)
{
if (array[min] > array[j])
{
min = j;
}
}
temp = array[i];
array[i] = array[min];
array[min] = temp;
print_array(array, size);
}
}