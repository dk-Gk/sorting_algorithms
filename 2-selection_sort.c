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
if (!array || !size)
return;
for (i = 0; i < size - 1; i++)
{
for (j = size - 1, min = i + 1; j > i; j--)
{
if (array[j] < array[min])
{
min = j;
}
}
if (array[i] > array[k])
{
temp = array[i];
array[i] = array[min];
array[min] = temp;
print_array(array, size);
}
}
}
