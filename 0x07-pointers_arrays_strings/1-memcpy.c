#include "main.h"
/**
 * _memcpy - the function that copies memory area.
 * @dest: the destination string
 * @src: the source string
 * @n: the size of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; n > 0; k++, n--)
	{
		dest[i] = src[i];
	}
	return (dest);
}
