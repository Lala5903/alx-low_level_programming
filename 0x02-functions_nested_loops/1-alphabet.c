#include<stdio.h>
#include"main.h"

/**
 * main - prints the alphabet in lowerase
 *
 * Return : Always 0
 */

void print_alphabet(void);
{
	int j;

	for (j = 'a' ; j <= 'z' ; j++)
	{
		_putchar(j);
}
       _putchar('\n');
    
	return (0);
}
