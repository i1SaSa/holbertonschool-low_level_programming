#include "main.h"
/**
* swap_int - swap to variable by pointers
*
* @a: the value will be swaped
* @b: the value will be swaped
*/

void swap_int(int *a, int *b)
{
	int q = *a;

	*a = *b;
	*b = q;

}
