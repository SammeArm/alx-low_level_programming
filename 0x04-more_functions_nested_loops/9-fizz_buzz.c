#include <stdio.h>

/**
*main - Fizz-Buzz test
*Description: print numbers 1 -100 replacing multiples of 3 with Fizz
*multiples of 5 with Buzz, and multiples of both with FizzBuzz
*Return: zero
*/

int main(void)
{
	int i = 1;

	while (i++ < 100)
	{
		if ((i % 3 == 0) &&  (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((i % 5) == 0)
		{
			if (i != 100)
			{
				printf("Buzz ");
			}
			else
			{
				printf("Buzz ");
			}
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	return (0);
}
