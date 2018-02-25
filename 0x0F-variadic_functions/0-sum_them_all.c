#include "variadic_functions.h"
/**
 * sum_them_all- Sum the parameters passed in
 *
 * @n: number of parameters being passed in
 * Description: sums parameters
 * Return: the sum of parameters as an int
 **/

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(list, n);
	for (i = 0; i < n; i++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
