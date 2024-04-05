// mario_less.c
#include "../../../cs50.h"
#include <stdio.h>
#include <string.h>
#define or ||

int main(void)
{
	int height;

	do
	{
		height = get_int("Enter height: ");
	} while (height < 1 or height > 8);

	for (int i = 1; i < height; i++)
	{
		for (int j = 0; j < height + 1; j++)
		{
			if (j >= i + 1)
			{
				printf("%c", '#');
			}
			else
			{
				printf("%c", ' ');
			}
		}

		printf("\n");
	}

	return 0;
}