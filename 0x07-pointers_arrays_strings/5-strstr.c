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

	if (*needle == '\0')
		return (haystack);
	for (; *haystack; haystack++)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
	}
	return ('\0');
}
