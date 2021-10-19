#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	if (size != 0 || count != 0)
		ft_bzero(ptr, count * size);
	return ((void *) ptr);
}
