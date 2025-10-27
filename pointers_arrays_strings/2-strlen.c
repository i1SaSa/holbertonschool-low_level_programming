#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* strlen - scale lenght of a string
*
* @s: string
* Return: 0
*/
int _strlen(char *s)
{
	int str;
	str = 0;

	while (s[str] != '\0')
	{
		str += 1;
		return str;
	}
return (0);
}
