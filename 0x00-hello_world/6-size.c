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

	printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(u));
	printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(v));
	printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(w));
	printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(x));
	printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(y));

#if defined(__x86_64__) || defined(__ppc64__)
	/* Output for 64-bit systems */
	printf("This is a 64-bit system.\n");
#else
	/* Output for 32-bit systems */
	printf("This is a 32-bit system.\n");
#endif

	return (0);
}
