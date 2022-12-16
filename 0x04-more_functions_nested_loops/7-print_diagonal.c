#include "main.h"
#include <stdio.h>
/**
 * print_diagonal - check for a digit
 * @n: number of \\ to be printed
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
					putchar('\\');
			}
			putchar('\n');
		}
	}
}
