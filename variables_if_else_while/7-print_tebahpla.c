#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */

int main(void)
{
int x;
for (x = 'z' ; x >= 'a'; --x)
{
putchar(x);
}
putchar('\n');
return (0);
}
