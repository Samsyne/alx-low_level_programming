#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - To Complete the source code in order to 
 * print the last digit of the 
 * number stored in the variable n
 */
int main(void)
	{
	int n; riley;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	riley = n % 10;
	
	if (riley > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, riley);
	}
	else if (lastd == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, riley);
	}
	else if (lastd < 6 && lastd != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, riley);
	}

	return (0);
}
