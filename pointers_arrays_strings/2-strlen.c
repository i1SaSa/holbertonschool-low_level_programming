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
	int len;
	len = 0;

	while (s[len] != '\0')
	{
		len += 1;

		return len;
	}
return (0);
}
