#include <stdio.h>
/**
 * main - prints the sizeof many var types
 *
 * Return: Always 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
	printf("size of a char: %d byte(s)\n", sizeof(a));
	printf("size of an int: %d byte(s)\n", sizeof(b));
	printf("size of long int: %d byte(s)\n", sizeof(c));
	printf("size of a long long int: %dbyte(s)\m", sizeof(d));
	printf("size of a float: %d byte(s)\m", sizeof(e));
	return (0);
}
