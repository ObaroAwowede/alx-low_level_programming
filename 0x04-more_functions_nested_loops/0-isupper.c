#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 *
 * _isupper: uppercase letters
 *
 * Description: checks for uppercase letters
 *
 * @c: character
 *
 * Return: 0 or 1
 */


int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
