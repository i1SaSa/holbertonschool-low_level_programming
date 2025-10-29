#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 */
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

void print_rev(char *s)
{
	int len = strlen(s);

	for (len = len - 1; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
