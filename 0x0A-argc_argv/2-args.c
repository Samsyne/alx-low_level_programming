#include <stdio.h>
/**
 * main - A program that prints all its argument
 *
 * @argc: argument counts
 * @argv: Pointer to an argument array
 * Return: 0 is a success
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
