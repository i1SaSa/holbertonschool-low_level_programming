#include "main.h"
/**
* print_line - prints underscore depend on n
*@n: how many time that underscore will be printed
*
*/

void print_line(int n)
{
	int count;
		for (count = 1; count <= n; ++count)
		{
			if (n <= 0)
				continue;
			_putchar('_');
		}
	_putchar('\n');
}
