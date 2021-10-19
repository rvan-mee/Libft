#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*s3;

	if (!s1 || !s2)
		return (0);
	i = ft_strlen(s1) + ft_strlen(s2) + 1;
	s3 = malloc(i);
	if (s3 == 0)
		return (0);
	ft_strlcpy(s3, s1, ft_strlen(s1) + 1);
	ft_strlcat(s3, s2, i);
	return (s3);
}
