#include "main.h"
/**
 * _isupper - the entry point
 * Description: the function checks for uppercase character
 * @c: the char character
 * Return: 1 for uppercase or 0 otherwise
*/
int _isupper(int c)
{
	int i = 'a';

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			return (1);
		}		
	}
	return (0)
}
