#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: 0 indication of success
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		--letter;
	}
	putchar('\n');

	return (0);
}
