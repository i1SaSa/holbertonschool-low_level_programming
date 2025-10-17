#include<stdio.h>
/**
 *
 * main - prgram that print all base 16 in lowercase
 *
 * return 0
 */
int main(void)
{
int x;
int y;
for (y = '0'; y <= '9'; ++y)
putchar(y);
for (x = 'a'; x <= 'f'; ++x)
putchar(x);
putchar('\n');
return (0);
}
