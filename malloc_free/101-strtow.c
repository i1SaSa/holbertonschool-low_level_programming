#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings, or NULL on failure
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, l, wc = 0, len = 0, start, end;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			wc++;
	}

	if (wc == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (wc + 1));
	if (words == NULL)
		return (NULL);

	for (i = 0, k = 0; k < wc; k++)
	{
		while (str[i] == ' ')
			i++;
		start = i;
		while (str[i] && str[i] != ' ')
			i++;
		end = i;
		len = end - start;

		words[k] = malloc(sizeof(char) * (len + 1));
		if (words[k] == NULL)
		{
			for (j = 0; j < k; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}

		for (l = 0; l < len; l++)
			words[k][l] = str[start + l];
		words[k][l] = '\0';
	}
	words[k] = NULL;

	return (words);
}

