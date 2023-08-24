#include "main.h"

/**
 * infinite_add - add two numbers
 * @n1:first number
 * @n2:sonkned nimber
 * @r:Pointer
 * @size_r: Size of r
 *
 * Return: Pointer
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int xx, yy = 0, ii = 0, jj = 0, cc, hh, aa = 0;

	while (n1[ii] != '\0')
		ii++;
	while (n2[jj] != '\0')
		jj++;
	if (ii > jj)
		yy = ii;
	else
		yy = jj;
	if (yy + 1 > size_r)
		return (0);
	r[yy] = '\0';
	for (xx = yy - 1; xx >= 0; xx--)
	{
		ii--;
		jj--;
		if (ii >= 0)
			cc = n1[ii] - '0';
		else
			cc = 0;
		if (jj >= 0)
			hh = n2[jj] - '0';
		else
			hh = 0;
		r[xx] = (cc + hh + aa) % 10 + '0';
		aa = (cc + hh + aa) / 10;
	}
	if (aa == 1)
	{
		r[yy + 1] = '\0';
		if (yy + 2 > size_r)
			return (0);
		while (yy-- >= 0)
			r[yy + 1] = r[yy];
		r[0] = aa + '0';
	}
	return (r);

}
