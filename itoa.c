#include "libft.h"

int	sizecheck(int n)
{
	int	i;

	i = 1;
	while (n > 9)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	itoahelper(int	n)
{
	char	c;

	while (n > 9)
		n /= 10;
	c = n + 48;
	return (c);
}

void	recursive(long int n, int *i, char *str)
{
	if (n > 9)
		recursive(n / 10, i, str);
	n %= 10;
	str[*i] = itoahelper(n);
	*i += 1;
}

char *ft_itoa(int n)
{
	char		*str;
	int			neg;
	int			i;
	long int	j;

	i = 0;
	neg = 0;
	j = n;
	if (j < 0)
	{
		j *= -1;
		neg++;
		i++;
	}
	str = malloc(sizeof(char) * sizecheck(j) + neg + 1);
	if (str == 0)
		return (0);
	if (neg == 1)
		str[0] = '-';
	recursive(j, &i, str);
	str[i] = '\0';
	return (str);
}
