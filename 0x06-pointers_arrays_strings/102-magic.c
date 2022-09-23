#include <stdio.h>

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	 * write the code here
	 * Requirements:
	 * - using a is not allowed
	 * - not allowed to modify p
	 * - one statement
	 * - not allowed to code anything else
	 */
	*(p + 5) = 98;
	/* prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
