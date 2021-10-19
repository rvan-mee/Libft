char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		j;
	char	a;

	a = c;
	i = 0;
	j = -1;
	while (s[i])
	{
		if (s[i] == a)
			j = i;
		i++;
	}
	if (s[i] == a)
		j = i;
	if (j != -1)
		return ((char *) &s[j]);
	return (0);
}
