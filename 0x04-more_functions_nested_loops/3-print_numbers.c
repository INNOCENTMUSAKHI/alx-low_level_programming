#include "main.h"
/**
 * print_numbers - function that prints numbers 0 through 9
 *
 * Return: 0-9 followed by a new line
 */
void print_numbers(void)
{
	char n = 0;

	while (n <= 9)
	{
		_putchar('0' + n);
		n++;
	}
	_putchar('\n');
}
