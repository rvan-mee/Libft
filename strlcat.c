#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = ft_strlen(dst);
	k = ft_strlen(src);
	j = i + k;
	if (i >= dstsize)
		return (k + dstsize);
	dst += i;
	while (*src && dstsize - 1 - i > 0)
	{
		ft_memcpy(dst++, src++, 1);
		dstsize--;
	}
	*dst = 0;
	return (j);
}
