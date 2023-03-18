#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: 0 if the program executes successfully
 */
int main(void)
{
	char u;
	int v;
	long int w;
	long long int x;
	float y;

	printf("Size of char: %zd byte(s)\n", sizeof(u));
	printf("Size of int: %zd byte(s)\n", sizeof(v));
	printf("Size of long int: %zd byte(s)\n", sizeof(w));
	printf("Size of long long int: %zd byte(s)\n", sizeof(x));
	printf("Size of float: %zd byte(s)\n", sizeof(y));

#if defined(__x86_64__) || defined(__ppc64__)
	/* Output for 64-bit systems */
	printf("This is a 64-bit system.\n");
#else
	/* Output for 32-bit systems */
	printf("This is a 32-bit system.\n");
#endif

	return (0);
}
