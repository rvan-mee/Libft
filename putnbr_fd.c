#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int			neg;

	neg = 0;
	if (n < 0 && n != -2147483648)
	{
		n *= -1;
		neg++;
	}
	if (n != -2147483648)
	{
		if (n > 9)
			ft_putnbr_fd(n / 10, fd);
		n %= 10;
		n += 48;
		if (neg == 1)
			write(fd, "-", 1);
		write(fd, &n, 1);
	}
	else
		write (fd, "-2147483648", 12);
}
