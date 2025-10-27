#include "main.h"
#include <stdio.h>
/**
* _puts - print a string
*
*@str: the srting that will be printed
*
*/
void _puts(char *str)
{
	while (*str)
	{
		putchar(*str++);
	}
	putchar('\n');
}
