#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */

int main(void)
{
int x;
for (x = 'a' ; x <= 'z'; ++x)
{
	if (x == 'q' || x == 'e')
		continue;
	putchar(x);
}
putchar('\n');
return (0);
}
