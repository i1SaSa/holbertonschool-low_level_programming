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

		for (line = 1; line <= size; line++)
		{
			for (space = size - line; space > 0; space--)
				_putchar(' ');

			for (hash = 1; hash <= line; hash++)
				_putchar('#');
			_putchar('\n');
		}
	} else
		_putchar('\n');
}
