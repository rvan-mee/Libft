#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	i;

	i = n;
	if (i < 0)
	{
		i *= -1;
		write(fd, "-", 1);
	}
	if (i > 9)
		ft_putnbr_fd(i / 10, fd);
	i %= 10;
	i += 48;
	write(fd, &i, 1);
}
