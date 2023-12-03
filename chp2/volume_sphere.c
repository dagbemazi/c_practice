#include <stdio.h>
#define PI 3.142

/**
  * main - compute the volume of a sphere
  *
  * Return: Always 0 on success
  */

int main(void)
{
	int cubic_radius, volume;
	float radius, vol_const;

	vol_const = 4.0f / 3.0f; /* fractional constant for formula */
	printf("Enter radius of sphere: ");

	scanf("%f", &radius);

	cubic_radius = radius * radius * radius;
	/* compute volume */
	volume = vol_const * PI * cubic_radius;
	printf("Volume of sphere: %d\n", volume);

	return (0);
}
