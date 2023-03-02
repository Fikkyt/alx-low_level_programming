#include "main.h"
/**
 * *_strcat - the function that concatenates two strings
 * @dest: - the destination string
 * @src: - the source string
 * Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != 0; i++)
		;
	for (j = 0; src[j]; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
