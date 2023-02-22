#include "main.h"
/**
 * print_last_digit - the entry point
 * Description: functions that prints the last digit of a number
 * @n: the placeholder
 * Return: 0
 */
int print_last_digit(int n)
{
	int lastd = n % 10;

	if (n < 0)
	{
		lastd = lastd * -1;
	}
	_putchar(lastd + '0');
	return (lastd);
}
