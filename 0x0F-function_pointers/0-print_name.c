#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name using pointer to function
 * @name: The character to print
 * @f: function pointer
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
