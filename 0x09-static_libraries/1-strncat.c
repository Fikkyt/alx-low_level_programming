#include "main.h"
/**
 * _strncat - function that concatenates two strings amd use at
 * most n bytes from the src file
 * @dest: the destination string
 * @src: the source string
 * @n: the integer of maximum bytes from the src string
 * Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
