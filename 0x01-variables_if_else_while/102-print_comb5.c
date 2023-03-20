#include <stdio.h>
/**
 * main - entry point
 *
 * Return: alway returns 0
 *
 */
int main(void)
{
	int ones;
	int tens;

	for (ones = 0; ones <= 99; ones++)
	{
		for (tens = ones + 1; tens <= 99; tens++)
		{
			putchar(ones / 10 + '0');
			putchar(ones % 10 + '0');
			putchar(' ');
			putchar(tens / 10 + '0');
			putchar(tens % 10 + '0');

			if (!(ones == 98 && tens == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
