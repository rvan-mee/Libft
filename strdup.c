#include "libft.h"
#include <stdio.h>

char	*ft_strdup(const char *s1)
{
	char	*s2;

	s2 = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (s2 == '\0')
		return (0);
	ft_strlcpy((char *) s2, s1, (ft_strlen(s1) + 1));
	return (s2);
}
