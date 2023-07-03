#include "main.h"
#include <string.h>
/**
 * _strpbrk - searches for any occurence of characters in accept from s
 * @s: target string to be scanned
 * @accept: matching characters
 *
 * Return: pointer to bytes in s that matches bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
char *search;
for (search = s; *search != '\0'; search++)
{
if(strchr(accept, *search) != NULL)
{
return ((char *)search);
}
}
return (NULL);
}
