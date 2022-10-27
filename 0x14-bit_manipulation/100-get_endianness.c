#include "main.h"

/**
 * get_endianness - checks the eandianness
 *
 * Return: 0 if big eandian or 1 if little eandian
 */
int get_endianness(void)
{
	int num = 1;
	char *eandian = (char *)&num;

	if (*eandian == 1)
		return (1);

	return (0);
}
