#include <stdio.h>
#include "libft.h"

int	ft_tolower(int c);

int	main(void)
{
	char	str[] = "DUPADUPA";
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		printf("%c", ft_tolower(str[i]));
		i++;
	}
	printf("\n");
	return (0);
}
