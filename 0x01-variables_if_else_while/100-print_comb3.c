#include <stdio.h>

int main(void)
{
	int a, b, c;

	for (a = 0; a < 9; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			if (a == 0)
			{
				c = b;
			}
			else
			{
				c = (a * 10) + b;
			}

			if (c == 89)
			{
				putchar('8');
				putchar('9');
			}
			else
			{
				putchar((c / 10) + '0');
				putchar((c % 10) + '0');
			}

			if (a == 8 && b == 9)
			{
				continue;
			}

			putchar(',');
			putchar(' ');
		}
	}

	return (0);
}
