#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_square - prints hashes squares
 * @size: size of the square
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			putchar(35);
		}
		if (i != size - 1)
			putchar('\n');
	}
	putchar('\n');
}
