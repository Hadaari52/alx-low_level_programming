#include <stdio.h>
#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0
 * @n: the number of times to print the table (0 <= n <= 15)
 */
void print_times_table(int n)
{
int i, j;
if (n < 0 || n > 15)
{
return;
}
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
int product = i * j;
if (j == 0)
{
_putchar('0');
}
else if (product < 10)
{
_putchar(' ');
_putchar(' ');
_putchar(product + '0');
}
else if (product < 100)
{
_putchar(' ');
_putchar((product / 10) + '0');
_putchar((product % 10) + '0');
}
else
{
_putchar((product / 100) + '0');
_putchar(((product / 10) % 10) + '0');
_putchar((product % 10) + '0');
}
if (j < n)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
