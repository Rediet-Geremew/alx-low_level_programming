#include <stdio.h>

/**
 * print_before_main - prints a message
 */
void __attribute__((constructor)) print_befor_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
