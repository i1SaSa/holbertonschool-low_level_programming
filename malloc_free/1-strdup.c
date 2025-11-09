#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copy the string in *str
 *
 *@str: the string will be copied
 * Return : newstr
 */
char *_strdup(char *str)
{
	char *newstr;
	unsigned int i, len = 0;


	while (str[len] != '\0')
		len++;

	if (str == NULL)
		return (NULL);

	newstr = malloc(sizeof(char) * (len + 1));


	if (newstr == NULL)
		return (NULL);


	for (i = 0; i < len; i++)
		newstr[i] = str[i];
	newstr[len] = '\0';


	return (newstr);
}
