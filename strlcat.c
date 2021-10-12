#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(dst);
	j = ft_strlen(dst) + ft_strlen(src);

	if (i >= dstsize)
		return (ft_strlen(src) + dstsize);
	dst += i;
	while (*src && dstsize - 1 - i > 0)
	{
		ft_memcpy(dst++, src++, 1);
		dstsize--;
	}
	*dst = 0;
	return (j);
}
