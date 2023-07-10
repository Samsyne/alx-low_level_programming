#include <stdio.h>
#include <stdlib.h>
/**
 * main - A  program that multiplies two numbers.
 *
 * @argc: no of arguments counts on a commandline
 * @argv: pointer to a string of array
 * return: 0 is a success
 */
int main(int argc, char *argv[])
{
if (argc != 3) 
{
	printf("Error\n");
	return (1);
}
printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
