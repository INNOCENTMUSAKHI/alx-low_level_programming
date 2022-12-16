#include "main.h"
#include <stdio.h>
/**
 * print_line - check for a digit
 * @n : nmber of _ to be printed
 * Return: void
 */
void print_line(int n)
{
	int i = 0;

	while (i < n && n > 0)
	{
		putchar('_');
		i++;
	}
	putchar('\n');
}
