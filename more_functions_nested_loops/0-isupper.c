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
	if (isupper(c) > 0)
		return(1);
	else
		return (0);

}
