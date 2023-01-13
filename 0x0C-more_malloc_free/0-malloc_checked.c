#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memorto be allocated
 *
 * Return: pointer to allocated memory
 * Pointer to array
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
