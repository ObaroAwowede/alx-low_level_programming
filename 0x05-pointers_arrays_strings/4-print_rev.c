#include "main.h"

/**
 * print_rev - prints a string, in reverse
 *
 * @s: a string
 *
 * Return: none
 */
void print_rev(char *str)
{
	int len = 0, index;

	while (str[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
		_putchar(str[index]);

	_putchar('\n');
}
