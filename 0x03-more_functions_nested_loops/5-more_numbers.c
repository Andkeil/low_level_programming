#include "holberton.h"

/**
 * more_numbers - check the code for Holberton School students.
 *
 * Return: void.
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
		}
		_putchar(10);
	}
}