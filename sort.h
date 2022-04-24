#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
const int n;
struct listint_s *prev;
struct listint_s *next;
} listint_t;
void node_swap(listint_t *t1, listint_t *t2);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void qs(int *array, size_t size, ssize_t lo, ssize_t hi);
size_t LomutoPartion(int *array, size_t size, ssize_t lo, ssize_t hi);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
listint_t *backSort(listint_t *head, listint_t *tail, listint_t *list);
void swap(listint_t *first, listint_t *second);
void counting_sort(int *array, size_t size);
int integer_count(int *array, size_t size, int range);
void merge_sort(int *array, size_t size);
void merge_compare(int *array, size_t start, size_t stop, int *new);
void merge_sort_top_down(int *array, size_t start, size_t stop, int *new);
void heap_sort(int *array, size_t size);
void stupify(int *array, int heap, int i, int size);
void radix_sort(int *array, size_t size);
int radix_pass(int *array, ssize_t size, int digit, int *new_array);
int get_digit(long number, int digit);
/*void bitonic_sort(int *array, size_t size);*/
void quick_sort_hoare(int *array, size_t size);
void sswap(int *array, size_t size, int *a, int *b);
size_t hoare_partition(int *array, ssize_t size, ssize_t lo, ssize_t hi);
void quicksort(int *array, size_t size, ssize_t lo, ssize_t hi);
/*void sort_deck(deck_node_t **deck);*/


#endif
