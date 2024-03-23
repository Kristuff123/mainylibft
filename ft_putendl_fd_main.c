#include "libft.h"

void	ft_putendl_fd(char *s, int fd);

int	main(void)
{
	char	*str = "krzysztof graczyk";
	int	fd = 1;
	ft_putendl_fd(str, fd);
	return (0);
}
