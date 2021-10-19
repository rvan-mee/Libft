#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	i;

	if (!s)
		return (0);
	i = ft_strlen(s);
	if (i <= start || len == 0)
		return (ft_strdup(""));
	if (i - start < len)
		i = i - start;
	else
		i = len;
	s2 = malloc((i + 1) * sizeof(char));
	if (s2 == NULL)
		return (NULL);
	ft_strlcpy(s2, s + start, len + 1);
	return (s2);
}
