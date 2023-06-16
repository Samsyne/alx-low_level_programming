#include <stdio.h>
/**Writing a program that prints the size of various types on the computer which is compiled and run on
 * Return: 0 (success)
 */
int main(void)
{
printf("Size of a char : %zu bytes(s)\n", sizeof(char));
printf("Size of an int : %zu bytes(s)\n", sizeof(int));
printf("size of a long int : %zu byte(s)\n", sizeof(long long int));
printf("Size of a float : %zu byte(s)\n", sizeof(float));
return (0);
}
