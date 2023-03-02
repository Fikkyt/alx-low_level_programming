#include "main.h"
/**
 * reverse_array - the function that reverses
 * the content of an array of integers
 * @a: the integer pointer
 * @n: the number of byte
 * Return: array
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = n - 1; i >= n / 2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
