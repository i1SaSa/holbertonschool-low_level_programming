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

		for (space = 0; space < size; space++ )
		{
                _putchar(' ');
		for (hash = 1; hash <= size; ++hash)
                _putchar('#');
		for (line = 0; line <= size; line++ )
		_putchar('\n');
		}
	} else
		_putchar('\n');
}
