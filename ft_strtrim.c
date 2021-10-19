#include "libft.h"

int	checkstr(char const *s1, char const *set)
{
	while (*set != '\0' )
	{
		if (*set == *s1)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*a;
	int		i;

	i = 0;
	if (s1 == 0)
		return (0);
	while (checkstr(s1, set))
		s1++;
	if (*s1 == '\0')
		return (ft_strdup(""));
	while (s1[i] != '\0')
		i++;
	i--;
	while (checkstr(&s1[i], set))
		i--;
	a = malloc((i + 2) * sizeof(char));
	if (a == 0)
		return (0);
	ft_strlcpy(a, s1, i + 2);
	return (a);
}
