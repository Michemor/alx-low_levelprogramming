#include <string.h>
#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string
 */
void puts2(char *str)
{
int i, len;
len = strlen(str);
if (len == 0)
{
_putchar(92);
}
else
{
for (i = 0; i <= len; i++)
{
if (i % 2 == 0)
{
_putchar(*(str + i));
}
}
}
}