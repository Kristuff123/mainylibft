#include <stdio.h>
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd);

int	main(void)
{
	printf("Example 1: Using ft_putchar_fd for stdout (standard output)\n");
	ft_putchar_fd('X', 1);
	return (0);
}
