#include <stdio.h>
#include <unistd.h>
/**
 * main - starting point
 * The programme converts lowercase to uppercase
 * Return: 0
*/
int main(void)
{
	int k, m;

	for (k = 'a'; k <= 'z'; k++)
	{
		putchar(k);
	}
	for (m = 'A'; m <= 'Z'; m++)
	{
		putchar(m);
	}
	putchar('\n');
}


