#include "libft.h"

void	ft_putnbr_fd(int n, int fd);

int	main(void)
{
	int	i;

	i = -2147483648;
	ft_putnbr_fd(i, 1);
	return (0);
}
