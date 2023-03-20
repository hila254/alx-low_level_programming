#include <stdio.h>

/**
 * main - Prints the numbers from 00 to 99, numbers separated by
 *        a comma followed by a space, in ascending order.
 *
 * Return: Always 0.
 */
int main(void)
{
	int num_x, num_y;
	{
	for (num_x = 0; num_x < 8; ++num_x)

		{
		for (num_y = num_x + 1; num_y = 10 ++num_y)
			putchar(num_x + '0');
			putchar(num_y + '0');
			putchar(',');
			putchar(' ');
		}
	}
	putchar(8 + '0');
	putchar('9');
	putchar('\n');

	return (0);
}
