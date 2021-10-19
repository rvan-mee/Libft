#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	char			*ptr;
	unsigned int	i;

	i = 0;
	ptr = s;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
