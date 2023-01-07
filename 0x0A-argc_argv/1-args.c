#include <stdio.h>
#include "main.h"

/**
 * main - write a program that prints name of arguments passed into it
 * @args: The argument count
 * @argv: The argument vector
 *
 * Return: Always 0 (Success)
 */
int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void) argv;

	return (0);
}
