#include "libft.h"

void	ft_putstr_fd(char *s, int fd);

int	main(void)
{
	char	*str = "krzysztof graczyk";
	int		fd;

	fd = 1;
	ft_putstr_fd(str, fd);
	return (0);
}
