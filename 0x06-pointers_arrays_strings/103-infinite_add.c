#include "main.h"
/**
 * infinite_add - a function that adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer used by function to store result
 * @size_r: size of the buffer
 * Return: a pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int d, e, f, g, h, i;

	for (d = 0; n1[d]; d++)
		;
	for (e = 0; n2[e]; e++)
		;
	if (d > size_r || e > size_r)
		return (0);
	h = 0;
	for (d -= 1, e -= 1, f = 0; f < size_r - 1; d--, e--, f++)
	{
		i = h;
		if (d >= 0)
			i += n1[d] - '0';
		if (e >= 0)
			i += n2[e] - '0';
		if (d < 0 && e < 0 && i == 0)
		{
			break;
		}
		h = i / 10;
		r[f] = i % 10 + '0';
	}
	r[f] = '\0';
	if (d >= 0 || e >= 0 || h)
		return (0);
	for (f -= 1, g = 0; g < f; f--, g++)
	{
		h = r[f];
		r[f] = r[g];
		r[g] = h;
	}
	return (r);
}
