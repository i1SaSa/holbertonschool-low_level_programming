#include <stdlib.h>
#include "main.h"
/**
 * word_count - counts the number of words in a string
 * @str: input string
 *
 * Return: number of words
 */
int word_count(char *str)
{
	int i, wc = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			wc++;
	}
	return (wc);
}

/**
 * copy_word - copies a single word from a string
 * @str: input string
 * @start: starting index
 * @end: ending index (non-inclusive)
 *
 * Return: pointer to the copied word
 */
char *copy_word(char *str, int start, int end)
{
	char *word;
	int i, len = end - start;

	word = malloc(sizeof(char) * (len + 1));
	if (word == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		word[i] = str[start + i];
	word[i] = '\0';

	return (word);
}

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of words, or NULL on failure
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k = 0, wc, start, end;

	if (str == NULL || *str == '\0')
		return (NULL);

	wc = word_count(str);
	if (wc == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (wc + 1));
	if (words == NULL)
		return (NULL);

	for (i = 0; str[i] && k < wc; i++)
	{
		if (str[i] != ' ')
		{
			start = i;
			while (str[i] && str[i] != ' ')
				i++;
			end = i;
			words[k] = copy_word(str, start, end);
			if (words[k] == NULL)
			{
				for (j = 0; j < k; j++)
					free(words[j]);
				free(words);
				return (NULL);
			}
			k++;
		}
	}
	words[k] = NULL;
	return (words);
}

