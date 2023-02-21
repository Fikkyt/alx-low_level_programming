#include "main.h"
/**
 * _isalpha - the entry point
 * Description: the function checks for both uppercase amd lowercase
 * @c: the integer the function receives
 * Return: 1 for letters or 0 otherwise
 */
int _isalpha(int c)
{
	int m, n;

	for (m = 'a'; m <= 'z'; m++)
	{
		for (n = 'A'; n <= 'Z'; n++)
		{
			if (c == m && c == n)
			{
				return (1);
			}
		}
	}
	return (0);
}
