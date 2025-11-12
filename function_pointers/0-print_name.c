#include "function_pointers.h"
/**
 * print_name - print a name that recived from user
 *@*name: the name will be printed
 *@*f: the way of printing the name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
