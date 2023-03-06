#include "main.h"
/**
 * _strstr - the function that locates a substring
 * @haystack: the destination string
 * @needle: the source substrig
 * Return: haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (needle == '\0')
		return (haystack);
	for (i = 0; *haystack; i++)
	{
		for (i = 0; needle[i] >= '\0'; i++)
		{
			if (haystack[i] == needle[i])
			{
				haystack[i] = needle[i];
			}
		}
	}
	return (haystack);
}
