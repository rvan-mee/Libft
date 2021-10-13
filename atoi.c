#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *nptr)
{
	int	c;
	int	value;

	c = 0;
	value = 1;
	while (*nptr != '\0' && (*nptr == '\t' || *nptr == '\v' || *nptr == '\f'
			|| *nptr == '\r' || *nptr == '\n' || *nptr == ' '))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			value *= -1;
		nptr++;
	}
	while (ft_isdigit(*nptr))
	{
		c *= 10;
		c += *nptr - 48;
		nptr++;
	}
	return ((int) c * value);
}
