// population.c

#include "../cs50.h"
#include <stdio.h>

int main(void)
{
	int start_size, end_size, years = 0;

	do
	{
		start_size = get_int("Start size: ");
	} while (start_size < 9);

	do
	{
		end_size = get_int("End size: ");
	} while (end_size < start_size);

	while (start_size < end_size)
	{
		years++;
		start_size += (int)(start_size / 12);
	}

	printf("Years: %d\n", years);

	return 0;
}