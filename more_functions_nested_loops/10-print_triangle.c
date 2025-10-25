#include "main.h"
/**
* print_triangle - print a traingle
*
* @size: the size of traingle
*/
void print_triangle(int size)
{
	int line, space, hash;

	if (size > 0)
	{
		for (line = 0; line <= size; line++ )
		_putchar('\n');

		for (space = 0; space < line; space++ )
                _putchar(' ');

		for (hash = 1; hash <= size; ++hash)
		_putchar('#');
	} else
		_putchar('\n');
}
