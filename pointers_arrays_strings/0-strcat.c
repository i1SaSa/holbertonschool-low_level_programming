#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: Pointer to destination string.
 * @src: Pointer to source string.
 *
 * Return: Pointer to destination string.
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0, index = 0;

	while (dest[dest_len])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	dest[dest_len] = '\0';
	return (dest);
}

