#include <stdio.h>
#include <ctype.h>
/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0.
 */

int main(void)
{
int x, y;
for (x = 'a' ; x <= 'z'; ++x)
{
putchar(x);
}
for (y = 'A' ; y <= 'Z'; ++y)
{
putchar(y);

}
putchar('\n');

return (0);
}
