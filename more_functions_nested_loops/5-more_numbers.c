#include "main.h"
/**
* more_numbers - print numbers 0 - 14 in 10 lines
*
*
*
*/
void more_numbers(void)
{
	int itration, numbers;

	for (itration = 0; itration < 10; ++itration)
	{
		for (numbers = 0; numbers <= 14; ++numbers)
		{
			if (numbers > 9)
				_putchar((numbers / 10) + '0');
			_putchar((numbers % 10) + '0');
		}
	_putchar('\n');
	}



}
