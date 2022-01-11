#include "sort.h"

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
int i, temp;
for (i = lo; i < hi; i++)
{
if (array[i] <= pivot)
{
temp = array[i];
array[i] = array[p];
array[p] = temp;
print_array(array, size);
p++;
}
}
temp = array[p];
array[p] = array[hi];
array[hi] = temp;
print_array(array, size);
return (p);
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
print_array(array, size);
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
size_t l = 0;
size_t h = size - 1;
qs(array, size, l, h);
}
