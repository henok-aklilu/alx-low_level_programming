#include "variadic_functions.h"
#include <stdarg.h>

/**
*sum_them_all - sums all its parameters
*@n: first parameter
*
*Return: 0 if n is null
* or sum of parameters in other case
*/

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	count i = 0;
	va_list theList;

	if (n == 0)
	{
		return (0);
	}

	va_start(theList, n);
	for (; i < n; i++)
	{
		sum += va_arg(theList, int);
	}
	va_end(theList);
	return (sum);
}

