#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
int dig = 48;
while (dig <= 57)
{
putchar(dig);
if (dig != 57)
{
putchar(',');
putchar(' ');
}
dig++;
}
putchar('\n');
return (0);
}
