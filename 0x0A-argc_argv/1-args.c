#include <stdio.h>
/**
 * main - a program to print a no of arguments
 * @argc: no of argument count
 * @argv: an array of command line arguement
 * Return: 0 is success
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
