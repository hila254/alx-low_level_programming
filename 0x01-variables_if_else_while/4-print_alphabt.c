#include <stdio.h>

/**
 * main - Entry point printing alphabets in lowercase, except q and e.
 *
 * Return: 0 (indicates success)
 */
int main(void)
{
	/*Initialize a variable to store the current letter to be printed.*/
	char letter;

	/*
	 * Start loop to run 'a' to 'z' inclusive using the for loop.
	 *
	 * for checks if the current letter is not 'e' and 'q' using if condition.
	 *
	 * If the letter is neither 'e' nor 'q', it prints it  using putchar() func.
	 *
	 * Finally, the program prints a newline using putchar('\n')
	 */
	for (letter = 'a'; letter <= 'z'; ++letter)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
