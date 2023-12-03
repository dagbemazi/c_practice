#include <stdarg.h>


/**
 * add - add variable number of integers
 * @a: first arg
 * @b: next arg
 * Return: sum of arguments
 */

int add(int a, int b, ...)
{
	va_list numbers;
	int i, sum = 0;

	va_start(numbers, b);


}

/**
 * main - test the code
 *
 * Return: Always 0
 */

int main(void)
{
	int total;

	total = add(10, 39, 49);

	printf("The total is: %d\n", total);
	return (0);
}
