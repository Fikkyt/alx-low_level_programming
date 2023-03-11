#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - the program adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, k, add, len;
	char *ptr;

	add = 0;
	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			ptr = argv[i];
			len = _strlen(ptr);
			for (k = 0; k < len; k++)
			{
				if (_isdigit(*(ptr + k)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			add += atoi(argv[i]);
		}
		printf("%d\n", add);
	}
	return (0);
}
