#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints from m to 98
 * @n: starting point of integer
 */
void print_to_98(int n)
{
int i;
if (n <= 98)
{
for (i = n; i <= 97; i++)
{
printf("%d, ", i);
}
printf("98\n");
}
else
{
for (i = n; i >= 99; i--)
{
printf("%d, ", i);
}
printf("98\n");
}
}
