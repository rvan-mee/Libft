#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	i;

	if (!s)
		return (0);
	i = ft_strlen(s);
	s2 = malloc((len + 1) * sizeof(char));
	if (s2 == '\0')
		return (0);
	if (i <= start || i < len || i < (start + len))
	{
		s2[0] = '\0';
		return (s2);
	}
	ft_strlcpy(s2, &s[start], len + 1);
	return (s2);
}
