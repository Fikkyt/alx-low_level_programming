#include "main.h"
#include <stdio.h>
/**
 * print_array - the  function that prints n elements of an array
 * of integers, followed by a new line
 * @a: the pointer to array of integers
 * @n: the number of element to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++, a++)
	{
		printf("%d, ", *a);
	}
	_putchar('\n');
}
