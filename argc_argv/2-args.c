#include <stdio.h>
/**
 *main - print command argument
 * @argc: number of argument
 * @argv: arry of argument
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
