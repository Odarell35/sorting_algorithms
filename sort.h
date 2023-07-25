#ifndef _SORT_H_
#define _SORT_H_

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

/*prototyp for quick sort ndoda im so tired*/
void swap(int *a, int *b);
int partition(int *array, int low, int high, size_t size);
void quick_sort_recursive(int *array, int low, int high, size_t size);
void quick_sort(int *array, size_t size);
/*--------------------------------------------------*/
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
int findminimum(int array[], int size, int idx);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/*prototype for 1-insertion_sort_list.c*/
void insertion_sort_list(listint_t **list);
void swapNode(listint_t **a, listint_t **b);
 /*---prototype for shell sort*/
void shell_sort(int *array, size_t size);
int _pow_recursion(int x, int y);
#endif
