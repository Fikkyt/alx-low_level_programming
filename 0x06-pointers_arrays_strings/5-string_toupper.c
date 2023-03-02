#include "main.h"
/**
 * string_toupper - the function that changes all lowercase letters of a
 * string to uppercase
 * @str: the string pointer
 * Return: char
 */
char *string_toupper(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

