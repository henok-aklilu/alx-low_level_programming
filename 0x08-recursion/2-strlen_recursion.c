#include "main.h"

/**
 * _strlen_recursion - Returns the lengeth of a string.
 * @s: The string to be measured.
 *
 * Return: The length of th string.
 */
int_strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recurssion(s + 1);
	}

	return (len);
}
