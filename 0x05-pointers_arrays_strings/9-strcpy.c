#include "main.h"
/**
 * _strcpy - the function that copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: the destination string to copy to
 * @src: the source string to copy from
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *src != '\0'; i++, src++)
		;
	src[i] = '\0';
	dest = &src;
	return (dest);
}