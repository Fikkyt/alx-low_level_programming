#include "main.h"
/**
 * _strncpy - the function that copies a string
 * @dest: the destination string
 * @src: the source string
 * @n: the integwr n that copies the n bytes from the source string
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; dest[i]; i++)
		;
	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
