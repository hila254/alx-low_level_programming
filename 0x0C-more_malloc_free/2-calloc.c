#include <stdlib.h>
#include <main.h>

/**
 * _calloc - Allocates memory for an array of a certain number
 *           of elements each of an inputted byte size.
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 *
 * Return: If nmemb = 0, size = 0, or the function fails - NULL.
 *         Otherwise - a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mes;
	char *fill;
	unsigned int index_zero;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mes = malloc(size * nmemb);

	if (mes == NULL)
		return (NULL);

	fill = mes;

	for (index_zero = 0; index_zero < (size * nmemb); index_zero++)
		fill[index_zero] = '\0';

	return (mes);
}
