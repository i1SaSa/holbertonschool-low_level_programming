#include "main.h"
#include <stdlib.h>
/**
 *
 *
 *
 *
 */
char *_strdup(char *str)
{
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;

	if (str == NULL)
		return (NULL);

	newstr = malloc(sizeof(char) * (len + 1));


	if (newstr == NULL)
		return (NULL);


	for (i = 0; i < len; i++)
		newstr[i] = str[i];



	return (newstr);
}
