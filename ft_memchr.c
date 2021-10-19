#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	search;
	size_t			i;

	str = (unsigned char *) s;
	search = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (str[i] == search)
			return (&str[i]);
		i++;
	}
	if ((str[i] == search) && (i != n))
		return (&str[i]);
	return (0);
}
