#include "main.h"
#include <ctype.h>
/**
 * _isdigit - check if the variable is digit
 * @c: int that will be checked
 *
 * Return: 1 if digit, otherwise 0
*/
int _isdigit(int c)
{
if (isdigit(c))
return (1);
else
return (0);


}
