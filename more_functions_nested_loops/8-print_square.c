#include "main.h"
/**
* print_square - print square shape
*@size: the size of the square
*
*/

void print_square(int size)
{
	int line, count;

	if (size > 0)
	{
		for (line = 0; line < size; ++line)
		{
			for (count = 0; count < size; count++)
				_putchar('#');
			_putchar('\n');
		}

	} else
		_putchar('\n');


}

