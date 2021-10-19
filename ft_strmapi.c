#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	j;
	char			*str;

	if (!s)
		return (0);
	i = 0;
	j = ft_strlen(s);
	str = malloc(sizeof(char) * j + 1);
	if (str == 0)
		return (0);
	while (i < j)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
