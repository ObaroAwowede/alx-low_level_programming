#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints numbers n to 98
 *
 * Description function that prints all natural numbers
 *
 * @n: integer
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}

	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}

	if (n == 98)
		printf("%d", n);

	printf("\n");
}

