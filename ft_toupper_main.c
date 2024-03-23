#include <unistd.h>
#include "libft.h"

int	ft_toupper(int c);

int	main(void)
{
	char	*string = "yo yo yo Que Pasa 123?";
	int	i;
	int	c;

	i = 0;
	while (string[i] != '\0')
	{
		c = ft_toupper(string[i]);
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
