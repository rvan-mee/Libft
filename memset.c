#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{	
	unsigned char	*ptr;
	unsigned int	i;

	ptr = b;
	i = 0;
	while (i < len)
	{
		ptr[i] = c;
		i++;
	}
	return (b);
}
