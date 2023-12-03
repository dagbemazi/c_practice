#include <stdio.h>

/**
  * main - compute the amount with 5% tax added
  *
  * Return: always 0.
  */

int main(void)
{
	float tax, total_amount, amount;

	tax = 0.05; /* 5% tax */
	printf("Enter an amount: ");
	scanf("%f", &amount);

	/* compute amount */
	total_amount = amount * (1.0 + tax);

	printf("With tax added: $%.2f\n", total_amount);
	return (0);
}
