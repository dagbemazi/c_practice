#include <stdarg.h>
#include <stdio.h>


/**
 * add - add variable number of integers
 * @count: number of args
 *
 * Return: sum of arguments
 */

int add(int count, ...)
{
	va_list numbers;
	int i, sum = 0;

	va_start(numbers, count);

	for (i = 0; i < count; i++)
	{
		sum += va_arg(numbers, int);
	}

	return (sum);
}

/**
 * main - test the code
 *
 * Return: Always 0
 */

int main(void)
{
	int total;

	total = add(2, 39, 49);

	printf("The total is: %d\n", total);
	return (0);
}
