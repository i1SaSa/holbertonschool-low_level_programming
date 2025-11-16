#include "function_pointers.h"

/**
 * array_iterator - runs a function on each element of an int array
 * @array: pointer to int array
 * @size: size of the array
 * @action: pointer to function to apply to each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
