#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
int j;

for (i = 0; i <= 99; x++)
{
for (j = 0; j <= 99; y++)
{
if (i < j)
{
putchar(i / 10 + '0');
putchar(i % 10 + '0');
putchar(32);
putchar(j / 10 + '0');
putchar(j % 10 + '0');
if (j != 98)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
