char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;

	i = 0;
	j = -1;
	while (s[i])
	{
		if (s[i] == c)
			j = i;
		i++;
	}
	if (s[i] == c)
		j = i;
	if (j != -1)
		return ((char *) &s[j]);
	return (0);
}
