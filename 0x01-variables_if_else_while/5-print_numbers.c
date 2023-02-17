#include <stdio.h>
#include <unistd.h>
/**
 * main - the starting point
 * The programme prints number 0 to 9
 * Return: 0
 */
int main(void)
{
	int f;

	for (f = 0; f < 10; f++)
	{
		putchar("%c", f);
	}
	putchar('\n');
	return (0);
}
