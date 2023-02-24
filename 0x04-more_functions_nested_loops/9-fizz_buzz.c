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
			printf("FizzBuzz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", n);
		}
		if (n != 100)
		{
			printf(" ");
		}
	}
	putchar('\n');
	return (0);
}
