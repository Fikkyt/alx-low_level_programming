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
	int i, length;

	length = 0;
	for (i = 0; a[i] && i < n; i++)
	{
		length += 1
	}
	while (i < n && i >= 0)
	{
		if (i != length)
		{
			_putchar(', ');
		}
		_putchar(a[i]);
		i--;
	}
}
