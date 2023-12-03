#include <stdio.h>

/**
  * main - compute the dimensional weight of box
  *
  * Return: Always 0 on success
  */

int main(void)
{
	int weight, volume;
	float height, width, length;

	printf("Enter height, width and length (separated by space)\n");
	scanf("%f %f %f", &height, &width, &length);

	/* compute volume */
	volume = height * width * length;
	/* compute dimensional weight */
	weight = (volume + 165) / 166;

	/* Display results */
	printf("Volume of box: %d\n", volume);
	printf("Dimensional weight: %d\n", weight);

	return (0);
}
