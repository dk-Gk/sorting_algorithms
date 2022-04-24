#include "sort.h"

/**
 * node_swap - swaps a node of a doubly linked list
 * @t1: first node
 * @t2: second node
 * Return: Nothing
 */

void node_swap(listint_t *t1, listint_t *t2)
{
if (t1->prev)
t1->prev->next = t2;
if (t2->next)
t2->next->prev = t1;
t1->next = t2->next;
t2->prev = t1->prev;
t1->prev = t2;
t2->next = t1;
}

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * @list: list to be sorted
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
listint_t *t1;
listint_t *t2;

t1 = (*list)->next;
if (!list || !*list || !(*list)->next)
return;
while (t1)
{
t2 = t1;
t1 = t1->next;
while (t2 && t2->prev)
{
if (t2->prev->n > t2->n)
{
node_swap(t2->prev, t2);
if (!t2->prev)
*list = t2;
print_list((const listint_t *) *list);
}
else
t2 = t2->prev;
}
}
}
