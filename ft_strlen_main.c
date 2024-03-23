#include <stdio.h>
#include "libft.h"

size_t	ft_strlen(const char *s);

int	main(void)
{
	char	str[] = "dupadupa";
	size_t	result;

	result = ft_strlen(str);
	printf("%s has %zu letters\n", str, result);
	return (0);
}
