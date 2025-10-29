#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);
/**
* puts2 - print other char in the string
* @str: the string
*
*/
void puts2(char *str)
{
	int index = 0;

	while (str[index] != '\0')
	{
		if (index % 2 == 0 || index == 0)
			_putchar(str[index]);
		++index;
	}
	_putchar('\n');
}
