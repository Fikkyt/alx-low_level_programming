#include <stdio.h>
/**
 * main - the entry point
 * The program that prints the size of various types.
 * Return: 0
 */
int main(void)
{
	int i;
	double d;
	char c;

	printf("The size of an integer is %lu,\n", (unassigned long)sizeof(i));
	printf("The size of a double is %lu,\n", (unassigned long)sizeof(d));
	printf("The size of a char is %lu,\n", (unassigned long)sizeof(c));

	return (0);
}
