#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'First advanced task'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int single;
	int double_fig;

	for (double_fig = '0'; double_fig <= '9'; double_fig++)
	{
		for (single = (double_fig + 1); single <= '9'; single++)
		{
			putchar(double_fig);
			putchar(single);

			if (double_fig != '8' || single != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
