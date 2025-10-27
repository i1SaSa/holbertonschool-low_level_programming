#include <stdio.h>
#include "main.h"
/**
* _puts - print a string
*
*@str: the srting that will be printed
*
*/
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
