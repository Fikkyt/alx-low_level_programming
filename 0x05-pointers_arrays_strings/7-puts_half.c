#include "main.h"
/**
 * puts_half - the function that prints half of
 * a string, followed by a new line
 * @str: the pointer of characters of string
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;

	/**
	 * to calculate the length of the string
	 */
	for (; *str != '\0'; str++)
	{
		len++;
	}
	/**
	 * if the length is even
	 */
	if (len % 2 == 0)
	{
		for (; ((len / 2) >= 0); len--, str--)
		{
			if (*str != '\0')
			{
				_putchar(*str)
			}
		}
	}
	else if (len % 2 != 0)
	{
		n = (len - 1) / 2;
		str = &n;
		if (*str != '\0')
		{
			_putchar(*str);
		}
	}
	_putchar('\n');
}
