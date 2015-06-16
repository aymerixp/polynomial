/*
 * http://www.geeksforgeeks.org/write-a-c-program-to-calculate-powxn/
 */
#include "../libraire/libft.h"

/* Function to calculate x raised to the power y */
int power(int x, unsigned int y)
{
	if (y == 0)
		return (1);
	else if (y % 2 == 0)
		return power(x, y/2) * power(x, y/2);
	else
		return x * power(x, y/2) * power(x, y/2);
}

/* Function to calculate x raised to the power y in O(logn) */
/*
int power(int x, unsigned int y)
{
	int temp;
	if (y == 0)
		return 1;
	temp = power(x, y/2);
	if (y%2 == 0)
		return temp*temp;
	else
		return x * temp * temp;
}*/

/* Extended version of power function that can work for float x and negative y */
/*
float power(float x, int y)
{
	float temp;
	if (y == 0)
		return 1;
	temp = power(x, y/2);
	if (y % 2 == 0)
		return temp * temp;
	else
	{
		if(y > 0)
			return x * temp * temp;
		else
			return (temp*temp)/x;
	}
}
*/

int		main(void)
{
	// avant le egale c'est a gauche
	// apres c'est a droite
	// si on deplace :
	// si c'est une + ou - on - ou +
	// si c'est une * ou / on / ou *
	ft_putnbr(power(4, 4));
	return (0);
}
