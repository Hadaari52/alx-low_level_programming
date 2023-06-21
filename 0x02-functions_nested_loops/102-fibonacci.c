#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
int i;
unsigned long long fib[50]; 
fib[0] = 1;
fib[1] = 2;
for (i = 2; i < 50; i++)
{
fib[i] = fib[i-1] + fib[i-2];
}
for (i = 0; i < 49; i++)
{
printf("%llu, ", fib[i]);
}
printf("%llu\n", fib[49]);
return (0);
}
