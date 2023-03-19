#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */

/**
 * main - program print the last digit of the number stored in the variable
 *
 * Return: 0 success.
 */

int main(void)
{
	int n;
	int last_int;/*come up with a variable last_int*/

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	last_int = n % 10 /*This line computes the last digit of integer n by dividing the remainder by 10. The result is stored in last_int*/
	
	if (last_int > 5)
		printf("Last digit of %d is %d and is greater than 5", n, last_int);
	else if (last_int == 0)
		printf("Last digit of %d is %d and is 0", n, last_int);
	else if (last_int < 6 && last_int != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, last_int);
	printf("\n");
	
	return (0);
}
