#include <stdio.h>
#include "main.h"
/**
 * main - the entry point
 * Description: A program that prints 1 to 100 followed by a new line
 * n: the integer
 * Return: 0
*/
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 15 == 0)
		{
			printf("%s, FizzBuzz");
		}
		else if (n % 5 == 0)
		{
			printf("%s, Buzz");
		}
		else if (n % 3 == 0)
		{
			printf("%s, Fizz");
		}
		else
		{
			printf("%d, n);
		}
		_putchar(' ');
	}
	_putchar('\n');
	return (0);
}
