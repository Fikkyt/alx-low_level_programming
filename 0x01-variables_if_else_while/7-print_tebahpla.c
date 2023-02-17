#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * The programme gives random out and print out the result using if statement
 * Return: 0
 */
int main(void)
{
	int m;

	for (m = 'z'; m <= 'a'; m--)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
