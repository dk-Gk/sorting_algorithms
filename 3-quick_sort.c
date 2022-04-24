#include "sort.h"

/**
 * swap - swaps 2 int values
 * @array: the integer array to sort
 * @size: the size of the array
 * @a: address of first value
 * @b: address of second value
 *
 * Return: void
 */
void swap(int *array, size_t size, int *a, int *b)
{
if (*a != *b)
{
*a = *a + *b;
*b = *a - *b;
*a = *a - *b;
print_array((const int *)array, size);
}
}

/**
 * LomutoPartion - a function that partions an array
 * @array: the array to be sorted
 * @size: the size of the array
 * @lo: the first index of the array
 * @hi: the last index of the array
 * Return: pivot index
 */
size_t LomutoPartion(int *array, size_t size, ssize_t lo, ssize_t hi)
{
size_t p = lo;
int pivot = array[hi];
int i, j = array[hi];
for (i = j = lo; i < hi; i++)
{
if (array[i] < pivot)
{
swap(array, size, &array[i], &array[j++]);
}
}
swap(array, size, &array[j], &array[hi]);
return (j);
}

/**
 * qs - a function that sorts an array of integers in ascending order
 * @array: the array to be sorted
 * @size: the size of the array
 * @lo: the first index of the array
 * @hi: the last index of the array
 * Return: pivot index
 */
void qs(int *array, size_t size, ssize_t lo, ssize_t hi)
{
if (lo < hi)
{
size_t p = LomutoPartion(array, size, lo, hi);
qs(array, size, lo, p - 1);
qs(array, size, p + 1, hi);
}
}

/**
 * quick_sort - a function that calls the sorting function
 * @array: the array to be sorted
 * @size: the size of the array
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
if (!array || !size)
return;
qs(array, size, 0, size - 1);
}
