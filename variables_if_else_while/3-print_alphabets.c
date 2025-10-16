#include <stdio.h>
#include <ctype.h>
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
putchar(x);
putchar(toupper(x));
}
putchar('\n');
return (0);
}
