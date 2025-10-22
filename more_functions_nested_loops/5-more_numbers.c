#include "main.h"
/**
* more_numbers - print numbers 0 - 14 in 10 lines
*
*
*
*/
void more_numbers(void)
{
	int itration;
	int numbers;

	for (itration = 0; itration < 10; ++itration)
	{
		for (numbers = 0; numbers <= 14; ++numbers)
		_putchar(numbers);
	_putchar('\n');
	}



}
