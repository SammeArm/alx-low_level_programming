#include <stdio.h>
/**
*main - writes 00 - 99
*Decription: Writes all unique combinations
*Return: zero for success
*/
int main(void)
{
	int x, y;

	for (x = 0; x <= 99; x++)
	{
		for (y = 0; y <= 99; y++)
		{
			if (x < y)
			{
				putchar((x / 10) + '0');
				putchar((x % 10) + '0');
				putchar(' ');
				putchar((y / 10) + '0');
				putchar((y % 10) + '0');
	
				if (x != 98 || y != 99)
				{
					putchar(',');
					putchar(' ');
				}	
			}
		}
	}
	putchar('\n');
	return (0);
}
