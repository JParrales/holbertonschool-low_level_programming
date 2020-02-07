
#include <stdio.h>

/**
* main - this is the main function
*
* Return: always will be 0
**/

int main(void)
{
int i, j, c;

for (i = '0'; i <= '9'; i++)
{
for (j = '0'; j <= '9'; j++)
{
if (i < j)
{
++c;
putchar(i);
putchar(j);
if (c < 45)
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
