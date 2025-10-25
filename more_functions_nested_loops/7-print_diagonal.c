#include "main.h"
/**
* print_diagonal - draws a diagonal
* @n: number of time '\' will be printed
*
*/


void print_diagonal(int n)
{
	int line;
	int space;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			_putchar('\n');
			for (space = 0; space < n; space++)
			{
				_putchar(' ');
			}
			_putchar(n);
		}

		_putchar('\n');
	} else
		_putchar('\n');



}
