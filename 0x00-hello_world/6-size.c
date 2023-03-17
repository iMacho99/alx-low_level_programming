#include <stdio.h>

/**
 * main - function
 *
 * Return: 0
 */

int main(void)
{
	printf("Size of int is %u byte(s)\n", (unsigned)sizeof(int));
	printf("Size of short is %u byte(s)\n", (unsigned)sizeof(short));
	printf("Size of long is %lu byte(s)\n", (unsigned long)sizeof(long));
	printf("Size of long long is %lu byte(s)\n", (unsigned long)sizeof(long long));
	printf("Size of float is %u byte(s)\n", (unsigned)sizeof(float));
	printf("Size of double is %lu byte(s)\n", (unsigned long)sizeof(double));
	printf("Size of long double is %lu bytes(s)\n", (unsigned long)sizeof(long double));
	printf("Size of char is %lu byte(s)\n", (unsigned)sizeof(char));
	printf("Size of void pointer is %lu byte(s)\n", (unsigned long)sizeof(void *));
	return (0);
}
