#include "main.h"
/**
 * _memset - the function that fills memory with a constant byte
 * @s: the destination pointer
 * @b: value to replaced or inserted to *s
 * @n: the size of byte of b
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	k = 0;
	while (n > k)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
