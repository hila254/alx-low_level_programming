#include <stdio.h>

/**
 * main - Entry point of the program.
 *
 * Return: 0 indicates success
 */
int main(void)
{
	/* Initialize a variable to store the current letter to be printed.*/
	int numb;

	/* Loop through numbers 0 to 9 and print each on a new line */
	for (numb = 0; numb < 10; ++numb)
	{
		/* Print current number */
		printf("%d", numb);
	}
	printf("\n");

	return (0);
}
