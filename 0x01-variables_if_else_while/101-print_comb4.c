#include <stdio.h>

/**
* main - this is the main function
*
* Return: always will be 0
**/

int main(void)
{
int i, j, k, c;
c = 0;
for (i = '0'; i <= '9'; i++)
{
for (j = '0'; j <= '9'; j++)
{
for (k = '0'; k <= '9'; k++)
{
if (i < j)
{
if (j < k)
{
++c;
putchar(i);
putchar(j);
putchar(k);
if (c < 120)
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
