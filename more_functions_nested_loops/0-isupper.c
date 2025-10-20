#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 * _isupper - print if the input uppercase
 * @c: the int that will be checked
 * Return: 0
*/
int _isupper(int c)
{
	if (isupper(c))
		printf("%d is uppercase", c);
	else
		printf("%d is not uppercase", c);
return (0);

}
