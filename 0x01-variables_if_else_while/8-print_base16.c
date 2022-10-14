#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'Task eight'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = '0';
	int lowercase = 'a';

	while (num <= '9') /*print 0-9*/
	{
		putchar(num);
		num++;
	}

	while (lowercase <= 'f') /*print a-f to finish hexbase*/
	{
		putchar(lowercase);
		lowercase++;
	}

	putchar('\n');

	return (0);
}
