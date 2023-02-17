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

	for (m = 'a'; m <= 'z'; m++)
	{
		if (m == 'e' || m == 'q')
		{
			continue;
		}
		else
		{
		putchar(m);
		}
	}
	putchar('\n');
	return (0);
}
