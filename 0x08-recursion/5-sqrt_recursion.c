#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find sqrt of
 *
 * Return: squareroot of n
 * -1 if n does not have a natural sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (helperfunction(n, 0));
