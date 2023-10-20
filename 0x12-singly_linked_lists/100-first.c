#include <stdio.h>

/**
 * bmain - function is executed before main
 *
 */
void __attribute__ ((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
