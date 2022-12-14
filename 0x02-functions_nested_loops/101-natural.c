#include <stdio.h>
/**
 * main - prints the sum of all multiples of 3 0r 5 upto 1824
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, z = 0;

	while (i < 1824)
	{
	if ((i % 3 == 0) || (i % 5 == 0))
	{
	z += i;
	}
	i++;
	}
	printf("%d\n", z);
	return (0);
}
